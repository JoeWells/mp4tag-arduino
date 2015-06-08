#ifndef Atom_h
#define Atom_h

#include "Arduino.h"
#include "C:\Program Files (x86)\Arduino\libraries\SdFat\SdFat.h"
extern SdFat SD;

class Atom
{
public:
	Atom(int startPos, File file);
	Atom(int startPos, File file, bool root);
	int Position();
	void GetName(char* buffer);
	int Length();
	void RewindAtom();
	Atom GetNextAtom();
	Atom FindAtom(char** names, int depth);
private:
	int position;
	File mp4file;
	int internalPosition;
};

#endif