#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class Dispatcher {
public:
    // prevent constructor by default
    Dispatcher& operator=(Dispatcher const&);
    Dispatcher(Dispatcher const&);
    Dispatcher();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Dispatcher@rtc@@UEAA@XZ
    virtual ~Dispatcher();

    // vIndex: 1, symbol: ?GetRequestedEvents@Signaler@rtc@@UEAAIXZ
    virtual uint GetRequestedEvents() = 0;

    // vIndex: 2, symbol: ?OnEvent@Signaler@rtc@@UEAAXIH@Z
    virtual void OnEvent(uint, int) = 0;

    // vIndex: 3, symbol: ?GetWSAEvent@Signaler@rtc@@UEAAPEAXXZ
    virtual void* GetWSAEvent() = 0;

    // vIndex: 4, symbol: ?GetSocket@Signaler@rtc@@UEAA_KXZ
    virtual uint64 GetSocket() = 0;

    // vIndex: 5, symbol: ?CheckSignalClose@Signaler@rtc@@UEAA_NXZ
    virtual bool CheckSignalClose() = 0;

    // vIndex: 6, symbol: ?Signal@Signaler@rtc@@UEAAXXZ
    virtual void Signal();

    // NOLINTEND
};

}; // namespace rtc
