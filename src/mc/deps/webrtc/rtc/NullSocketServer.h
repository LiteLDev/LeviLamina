#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/SocketServer.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class SocketServer; }
namespace rtc { class Thread; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class NullSocketServer : public ::rtc::SocketServer {
public:
    // prevent constructor by default
    NullSocketServer& operator=(NullSocketServer const&);
    NullSocketServer(NullSocketServer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NullSocketServer@rtc@@UEAA@XZ
    virtual ~NullSocketServer();

    // vIndex: 1, symbol: ?CreateSocket@NullSocketServer@rtc@@UEAAPEAVSocket@2@HH@Z
    virtual class rtc::Socket* CreateSocket(int, int);

    // vIndex: 3, symbol: ?Wait@NullSocketServer@rtc@@UEAA_NVTimeDelta@webrtc@@_N@Z
    virtual bool Wait(class webrtc::TimeDelta, bool);

    // vIndex: 4, symbol: ?WakeUp@NullSocketServer@rtc@@UEAAXXZ
    virtual void WakeUp();

    // symbol: ??0NullSocketServer@rtc@@QEAA@XZ
    MCAPI NullSocketServer();

    // NOLINTEND
};

}; // namespace rtc
