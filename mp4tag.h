#ifndef mp4tag_h
#define mp4tag_h

#include "mp4tag.h"
#include "Atom.h"
#include <SdFat.h>

//Itunes metadata atoms from http://atomicparsley.sourceforge.net/mpeg-4files.html
const char MP4_ALBUM[5] = "\xa9" "alb";
const char MP4_ARTIST[5] = "\xa9" "art";
const char MP4_ALBUMARTIST[5] = "aART";
const char MP4_COMMENT[5] = "\xa9" "cmt";
const char MP4_YEAR[5] = "\xa9" "day";
const char MP4_TITLE[5] = "\xa9" "nam";
const char MP4_GENRECUSTOM[5] = "\xa9" "gen";
const char MP4_GENRE[5] = "gnre";
const char MP4_TRACKNUM[5] = "trkn";
const char MP4_DISCNUM[5] = "disk";
const char MP4_COMPOSER[5] = "\xa9" "wrt";
const char MP4_ENCODER[5] = "\xa9" "too";
const char MP4_BPM[5] = "tmpo";
const char MP4_COPYRIGHT[5] = "cprt";
const char MP4_COMPILATION[5] = "cpil";
const char MP4_ARTWORK[5] = "covr";
const char MP4_EXPLICIT[5] = "rtng"; //Check if user rating or advisory rating
const char MP4_GROUPING[5] = "\xa9" "grp";
const char MP4_STIK[5] = "stik";
const char MP4_PODCAST[5] = "pcst";
const char MP4_CATEGORY[5] = "catg";
const char MP4_KEYWORD[5] = "keyw";
const char MP4_PODCASTURL[5] = "purl";
const char MP4_EPISODEUID[5] = "egid";
const char MP4_DESCRIPTION[5] = "desc";
const char MP4_LYRICS[5] = "\xa9" "lyr";
const char MP4_TVNETWORK[5] = "tvnn";
const char MP4_TVSHOW[5] = "tvsh";
const char MP4_TVEPISODENUM[5] = "tven";
const char MP4_TVSEASON[5] = "tvsn";
const char MP4_TVEPISODE[5] = "tves";
const char MP4_PURCHASEDATE[5] = "purd";
const char MP4_GAPLESSPLAYBACK[5] = "pgap";




class mp4tag
{
public:
	mp4tag(File);
	int GetTagLength();
private:
	File mp4file;
};

#endif