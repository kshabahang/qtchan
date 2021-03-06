#ifndef CHANS_H
#define CHANS_H

#include "chans/fourchan.h"
#include "chans/eightchan.h"
#include "chans/twochhk.h"

class Chans
{
public:
	static Chan* stringToType(QString &url);
	static inline QStringList apiList(){
		QStringList list;
		list << "4chan" << "8ch" << "2ch.hk";
		return list;
	}
	static Chan* get(QString &name);
	static void deleteAPIs();
};

extern Chan *fourChanAPI;
extern Chan *eightChanAPI;
extern Chan *twoChHkAPI;
#endif // CHANS_H
