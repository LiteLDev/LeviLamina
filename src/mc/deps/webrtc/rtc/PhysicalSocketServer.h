#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/SocketServer.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Dispatcher; }
namespace rtc { class Socket; }
namespace rtc { class SocketServer; }
namespace rtc { class Thread; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class PhysicalSocketServer : public ::rtc::SocketServer {
public:
    // prevent constructor by default
    PhysicalSocketServer& operator=(PhysicalSocketServer const&);
    PhysicalSocketServer(PhysicalSocketServer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PhysicalSocketServer@rtc@@UEAA@XZ
    virtual ~PhysicalSocketServer();

    // vIndex: 1, symbol: ?CreateSocket@PhysicalSocketServer@rtc@@UEAAPEAVSocket@2@HH@Z
    virtual class rtc::Socket* CreateSocket(int, int);

    // vIndex: 3, symbol: ?Wait@PhysicalSocketServer@rtc@@UEAA_NVTimeDelta@webrtc@@_N@Z
    virtual bool Wait(class webrtc::TimeDelta, bool);

    // vIndex: 4, symbol: ?WakeUp@PhysicalSocketServer@rtc@@UEAAXXZ
    virtual void WakeUp();

    // vIndex: 5, symbol: ?WrapSocket@PhysicalSocketServer@rtc@@UEAAPEAVSocket@2@_K@Z
    virtual class rtc::Socket* WrapSocket(uint64);

    // symbol: ?Add@PhysicalSocketServer@rtc@@QEAAXPEAVDispatcher@2@@Z
    MCAPI void Add(class rtc::Dispatcher*);

    // symbol: ??0PhysicalSocketServer@rtc@@QEAA@XZ
    MCAPI PhysicalSocketServer();

    // symbol: ?Remove@PhysicalSocketServer@rtc@@QEAAXPEAVDispatcher@2@@Z
    MCAPI void Remove(class rtc::Dispatcher*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ToCmsWait@PhysicalSocketServer@rtc@@CAHVTimeDelta@webrtc@@@Z
    MCAPI static int ToCmsWait(class webrtc::TimeDelta);

    // NOLINTEND
};

}; // namespace rtc
