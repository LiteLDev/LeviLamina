#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/SocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class SocketFactory; }
namespace rtc { class Thread; }
// clang-format on

namespace rtc {

class SocketServer : public ::rtc::SocketFactory {
public:
    // prevent constructor by default
    SocketServer& operator=(SocketServer const&);
    SocketServer(SocketServer const&);
    SocketServer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SocketServer@rtc@@UEAA@XZ
    virtual ~SocketServer();

    // vIndex: 2, symbol: ?SetMessageQueue@SocketServer@rtc@@UEAAXPEAVThread@2@@Z
    virtual void SetMessageQueue(class rtc::Thread*);

    // NOLINTEND
};

}; // namespace rtc
