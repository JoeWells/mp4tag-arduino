#include "Atom.h"
#include <Arduino.h>
#include <SdFat.h>
extern SdFat SD;

Atom::Atom(int startPos, File file)
{
	position = startPos;
	mp4file = file;
	internalPosition = startPos + 8;
}

Atom::Atom(int startPos, File file, bool root)
{
	if (!root)
	{
		Atom(startPos, file);
	}
	else
	{
		position = startPos;
		mp4file = file;
		internalPosition = startPos;
	}
}

int Atom::Position()
{
	return position;
}

void Atom::GetName(char* buffer)
{
	mp4file.seek(position + 4);

	mp4file.readBytes(buffer, 4);

}

int Atom::Length()
{
	char atomLengthByte[4];
	mp4file.seek(position);
	mp4file.readBytes(atomLengthByte, 4);
	return (atomLengthByte[0] << 24) | (atomLengthByte[1] << 16) | (atomLengthByte[2] << 8) | atomLengthByte[3];
}

void Atom::RewindAtom()
{
	internalPosition = position;
}

Atom Atom::GetNextAtom()
{
	Atom nextAtom = Atom(internalPosition, mp4file);
	internalPosition += nextAtom.Length();
	return nextAtom;
}

Atom Atom::FindAtom(char** names, int depth)
{
	if (depth == 1)
	{
		return *this;
	}

	Atom nextAtom = GetNextAtom();

	char buffer[4];

	nextAtom.GetName(buffer);
	while (strncmp(buffer, names[depth - 1], 4) != 0)
	{
		nextAtom = this->GetNextAtom();
		nextAtom.GetName(buffer);
	}

	return nextAtom.FindAtom(names, depth - 1);
}