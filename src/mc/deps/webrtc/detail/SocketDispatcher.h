#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class PhysicalSocketServer; }
// clang-format on

namespace rtc {

class SocketDispatcher {
public:
    // prevent constructor by default
    SocketDispatcher& operator=(SocketDispatcher const&);
    SocketDispatcher(SocketDispatcher const&);
    SocketDispatcher();

public:
    // NOLINTBEGIN
    // symbol: ?CheckSignalClose@SocketDispatcher@rtc@@UEAA_NXZ
    MCVAPI bool CheckSignalClose();

    // symbol: ?Close@SocketDispatcher@rtc@@UEAAHXZ
    MCVAPI int Close();

    // symbol: ?Create@SocketDispatcher@rtc@@UEAA_NH@Z
    MCVAPI bool Create(int);

    // symbol: ?Create@SocketDispatcher@rtc@@UEAA_NHH@Z
    MCVAPI bool Create(int, int);

    // symbol: ?GetRequestedEvents@SocketDispatcher@rtc@@UEAAIXZ
    MCVAPI uint GetRequestedEvents();

    // symbol: ?GetSocket@SocketDispatcher@rtc@@UEAA_KXZ
    MCVAPI uint64 GetSocket();

    // symbol: ?GetWSAEvent@SocketDispatcher@rtc@@UEAAPEAXXZ
    MCVAPI void* GetWSAEvent();

    // symbol: ?OnEvent@SocketDispatcher@rtc@@UEAAXIH@Z
    MCVAPI void OnEvent(uint, int);

    // symbol: ??1SocketDispatcher@rtc@@UEAA@XZ
    MCVAPI ~SocketDispatcher();

    // symbol: ?Initialize@SocketDispatcher@rtc@@QEAA_NXZ
    MCAPI bool Initialize();

    // symbol: ??0SocketDispatcher@rtc@@QEAA@PEAVPhysicalSocketServer@1@@Z
    MCAPI explicit SocketDispatcher(class rtc::PhysicalSocketServer*);

    // symbol: ??0SocketDispatcher@rtc@@QEAA@_KPEAVPhysicalSocketServer@1@@Z
    MCAPI SocketDispatcher(uint64, class rtc::PhysicalSocketServer*);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?next_id_@SocketDispatcher@rtc@@0HA
    MCAPI static int next_id_;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $next_id_() { return next_id_; }

    // NOLINTEND
};

}; // namespace rtc
