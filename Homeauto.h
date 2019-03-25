// Homeauto.h
// This file manages the retrieval of Weather related information and adjustment of durations
//   from local meteostation
// Author: Tomas Antal
// Copyright (c) 2019 Tomas Antal
//

#ifndef _HA_h
#define _HA_h

#include "port.h"
#include "Weather.h"

class Homeauto : public Weather
{
public:
	Homeauto(void);
private:
	Weather::ReturnVals InternalGetVals(const Weather::Settings & settings) const;
};

#endif
