// User configuration settings.
// Created by nhorvath on 3/24/19.
//

#ifndef SPRINKLERS_PI_CONFIG_H
#define SPRINKLERS_PI_CONFIG_H

// max number of schedules you will be allowed to create
#define MAX_SCHEDULES 10
// maximum number of zones allowed
#define NUM_ZONES 15

// Uncomment the next line if you want schedules to turn off when you use manual control
//#define DISABLE_SCHED_ON_MANUAL

/*************************************************
 * Weather Provider Section
 * Only uncomment one weather provider below.
 *************************************************/

// Weather Underground
// WARNING: this API may stop working at any moment.
//#define WEATHER_WUNDERGROUND

// Aeris Weather https://www.aerisweather.com
//#define WEATHER_AERIS

// DarkSky Weather https://darksky.net/dev
//#define WEATHER_DARKSKY

#define HOMEAUTO

// END WEATHER PROVIDER SECTION

// Set the on/off delay for "ChatterBox" (in microseconds)
// If your relay/solenoid isn't click-clacking try increasing this
#define CHATTERBOX_DELAY 100000
// Number of on/off cycles to execute per button press
#define CHATTERBOX_CYCLES 10

#define WIND_THRESHOLD 3
// cancel watering if windspeed is more than 3m/s 

#endif //SPRINKLERS_PI_CONFIG_H
