#ifndef mp4tag_h
#define mp4tag_h

#include "mp4tag.h"
#include "Atom.h"
#include <SdFat.h>

//Itunes metadata atoms from http://atomicparsley.sourceforge.net/mpeg-4files.html
const char MP4_ALBUM[4] = "©alb";
const char MP4_ARTIST[4] = "©art";
const char MP4_ALBUMARTIST[4] = "aART";
const char MP4_COMMENT[4] = "©cmt";
const char MP4_YEAR[4] = "©day";
const char MP4_TITLE[4] = "©nam";
const char MP4_GENRECUSTOM[4] = "©gen";
const char MP4_GENRE[4] = "gnre";
const char MP4_TRACKNUM[4] = "trkn";
const char MP4_DISCNUM[4] = "disk";
const char MP4_COMPOSER[4] = "©wrt";
const char MP4_ENCODER[4] = "©too;
const char MP4_BPM[4] = "tmpo";
const char MP4_COPYRIGHT[4] = "cprt";
const char MP4_COMPILATION[4] = "cpil";
const char MP4_ARTWORK[4] = "covr";
const char MP4_EXPLICIT[4] = "rtng"; //Check if user rating or advisory rating
const char MP4_GROUPING[4] = "©grp";
const char MP4_STIK[4] = "stik";
const char MP4_PODCAST[4] = "pcst";
const char MP4_CATEGORY[4] = "catg";
const char MP4_KEYWORD[4] = "keyw";
const char MP4_PODCASTURL[4] = "purl";
const char MP4_EPISODEUID[4] = "egid";
const char MP4_DESCRIPTION[4] = "desc";
const char MP4_LYRICS[4] = "©lyr";
const char MP4_TVNETWORK[4] = "tvnn";
const char MP4_TVSHOW[4] = "tvsh";
const char MP4_TVEPISODENUM[4] = "tven";
const char MP4_TVSEASON[4] = "tvsn";
const char MP4_TVEPISODE[4] = "tves";
const char MP4_PURCHASEDATE[4] = "purd";
const char MP4_GAPLESSPLAYBACK[4] = "pgap";




class mp4tag
{
public:
	mp4tag(File);
	int GetTagLength();
private:
	File mp4file;
};

#endif