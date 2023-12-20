#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncListenSocket {
public:
    // AsyncListenSocket inner types define
    enum class State {};

public:
    // prevent constructor by default
    AsyncListenSocket& operator=(AsyncListenSocket const&);
    AsyncListenSocket(AsyncListenSocket const&);
    AsyncListenSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AsyncListenSocket@rtc@@UEAA@XZ
    virtual ~AsyncListenSocket();

    // vIndex: 1, symbol: ?GetState@AsyncTcpListenSocket@rtc@@UEBA?AW4State@AsyncListenSocket@2@XZ
    virtual ::rtc::AsyncListenSocket::State GetState() const = 0;

    // vIndex: 2, symbol: ?GetLocalAddress@AsyncTcpListenSocket@rtc@@UEBA?AVSocketAddress@2@XZ
    virtual class rtc::SocketAddress GetLocalAddress() const = 0;

    // vIndex: 3, symbol: ?HandleIncomingConnection@AsyncTcpListenSocket@rtc@@UEAAXPEAVSocket@2@@Z
    virtual void HandleIncomingConnection(class rtc::Socket*);

    // NOLINTEND
};

}; // namespace rtc
