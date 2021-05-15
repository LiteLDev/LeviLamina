#pragma once
#include <liteloader.h>
#include <string>
using std::string;
//#define TRACING_ENABLED
#ifdef TRACING_ENABLED
void DOG_INIT();
LBAPI unsigned int DOG_BITE(string &&e);
LBAPI void DOG_FEED(unsigned int);
struct WatchDog {
    unsigned int myid;
    WatchDog(string &&e_) { myid = DOG_BITE(std::move(e_)); }
    ~WatchDog() { DOG_FEED(myid); }
};
#    define WATCH_ME(x) WatchDog wdg(x)
#else
/* struct WatchDog {
        WatchDog(string e_) {}
};*/
#    define WATCH_ME(x)
#endif