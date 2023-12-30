#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/BufferedReadAdapter.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class BufferedReadAdapter; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncSSLSocket : public ::rtc::BufferedReadAdapter {
public:
    // prevent constructor by default
    AsyncSSLSocket& operator=(AsyncSSLSocket const&);
    AsyncSSLSocket(AsyncSSLSocket const&);
    AsyncSSLSocket();

public:
    // NOLINTBEGIN
    // symbol: ?Connect@AsyncSSLSocket@rtc@@UEAAHAEBVSocketAddress@2@@Z
    MCVAPI int Connect(class rtc::SocketAddress const&);

    // symbol: ?OnConnectEvent@AsyncSSLSocket@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnConnectEvent(class rtc::Socket*);

    // symbol: ?ProcessInput@AsyncSSLSocket@rtc@@MEAAXPEADPEA_K@Z
    MCVAPI void ProcessInput(char*, uint64*);

    // symbol: ??0AsyncSSLSocket@rtc@@QEAA@PEAVSocket@1@@Z
    MCAPI explicit AsyncSSLSocket(class rtc::Socket*);

    // NOLINTEND
};

}; // namespace rtc
