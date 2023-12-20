#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/Dispatcher.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Dispatcher; }
// clang-format on

namespace rtc {

class Signaler : public ::rtc::Dispatcher {
public:
    // prevent constructor by default
    Signaler& operator=(Signaler const&);
    Signaler(Signaler const&);
    Signaler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Signaler@rtc@@UEAA@XZ
    virtual ~Signaler() = default;

    // vIndex: 1, symbol: ?GetRequestedEvents@Signaler@rtc@@UEAAIXZ
    virtual uint GetRequestedEvents();

    // vIndex: 2, symbol: ?OnEvent@Signaler@rtc@@UEAAXIH@Z
    virtual void OnEvent(uint, int);

    // vIndex: 3, symbol: ?GetWSAEvent@Signaler@rtc@@UEAAPEAXXZ
    virtual void* GetWSAEvent();

    // vIndex: 4, symbol: ?GetSocket@Signaler@rtc@@UEAA_KXZ
    virtual uint64 GetSocket();

    // vIndex: 5, symbol: ?CheckSignalClose@Signaler@rtc@@UEAA_NXZ
    virtual bool CheckSignalClose();

    // vIndex: 6, symbol: ?Signal@Signaler@rtc@@UEAAXXZ
    virtual void Signal();

    // NOLINTEND
};

}; // namespace rtc
