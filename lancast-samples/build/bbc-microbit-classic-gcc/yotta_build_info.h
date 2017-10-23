#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2017 // UTC year
#define YOTTA_BUILD_MONTH 10 // UTC month 1-12
#define YOTTA_BUILD_DAY 18 // UTC day 1-31
#define YOTTA_BUILD_HOUR 7 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 38 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 14 // UTC second 0-61
#define YOTTA_BUILD_UUID 313bfa5f-f1e6-47a3-a57b-fccadccd2b5e // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 15565dcae6944635414fbb6438857d7657d7a0bf // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION v2.0.0-rc9 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
