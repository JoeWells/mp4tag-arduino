#ifndef Atom_h
#define Atom_h

#include <SdFat.h>

class Atom
{
public:
	Atom(int, File);
	Atom(int, File, bool);
	int Position();
	void GetName(char*);
	int Length();
	int End();
	void RewindAtom();
	Atom GetNextAtom();
	Atom FindAtom(const char**, int);
	void SkipBytes(int);
private:
	int position;
	File mp4file;
	int internalPosition;
};

#endif