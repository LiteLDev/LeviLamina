#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/AsyncListenSocket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncListenSocket; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncTcpListenSocket : public ::rtc::AsyncListenSocket {
public:
    // prevent constructor by default
    AsyncTcpListenSocket& operator=(AsyncTcpListenSocket const&);
    AsyncTcpListenSocket(AsyncTcpListenSocket const&);
    AsyncTcpListenSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AsyncTcpListenSocket@rtc@@UEAA@XZ
    virtual ~AsyncTcpListenSocket() = default;

    // vIndex: 1, symbol: ?GetState@AsyncTcpListenSocket@rtc@@UEBA?AW4State@AsyncListenSocket@2@XZ
    virtual ::rtc::AsyncListenSocket::State GetState() const;

    // vIndex: 2, symbol: ?GetLocalAddress@AsyncTcpListenSocket@rtc@@UEBA?AVSocketAddress@2@XZ
    virtual class rtc::SocketAddress GetLocalAddress() const;

    // vIndex: 3, symbol: ?HandleIncomingConnection@AsyncTcpListenSocket@rtc@@UEAAXPEAVSocket@2@@Z
    virtual void HandleIncomingConnection(class rtc::Socket*);

    // symbol:
    // ??0AsyncTcpListenSocket@rtc@@QEAA@V?$unique_ptr@VSocket@rtc@@U?$default_delete@VSocket@rtc@@@std@@@std@@@Z
    MCAPI explicit AsyncTcpListenSocket(std::unique_ptr<class rtc::Socket>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnReadEvent@AsyncTcpListenSocket@rtc@@AEAAXPEAVSocket@2@@Z
    MCAPI void OnReadEvent(class rtc::Socket*);

    // NOLINTEND
};

}; // namespace rtc
