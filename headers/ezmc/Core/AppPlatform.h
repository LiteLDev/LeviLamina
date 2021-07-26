#pragma once

#include <functional>
#include <hook.h>

class AppPlatform {
public:
    inline void queueForMainThread(std::function<void()> fn) {
        CallServerClassMethod<void>("?queueForMainThread@AppPlatformWindows@@UEAAXV?$function@$$A6AXXZ@std@@@Z", this, fn);
    }
};