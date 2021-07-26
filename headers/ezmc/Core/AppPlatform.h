#pragma once

#include <functional>
#include <loader/Loader.h>

class AppPlatform {
public:
    inline void queueForMainThread(std::function<void()> fn) {
        SymCall("?queueForMainThread@AppPlatformWindows@@UEAAXV?$function@$$A6AXXZ@std@@@Z", void, const AppPlatform*, std::function<void()>)(this, fn);
    }
};