#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/AsyncPacketSocket.h"
#include "mc/deps/webrtc/detail/AsyncTCPSocketBase.h"
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncTCPSocketBase; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class AsyncTCPSocket : public ::rtc::AsyncTCPSocketBase {
public:
    // prevent constructor by default
    AsyncTCPSocket& operator=(AsyncTCPSocket const&);
    AsyncTCPSocket(AsyncTCPSocket const&);
    AsyncTCPSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AsyncTCPSocket@rtc@@UEAA@XZ
    virtual ~AsyncTCPSocket() = default;

    // vIndex: 3, symbol: ?Send@AsyncTCPSocket@rtc@@UEAAHPEBX_KAEBUPacketOptions@2@@Z
    virtual int Send(void const*, uint64, struct rtc::PacketOptions const&);

    // vIndex: 11, symbol: ?ProcessInput@AsyncTCPSocket@rtc@@UEAAXPEADPEA_K@Z
    virtual void ProcessInput(char*, uint64*);

    // symbol: ??0AsyncTCPSocket@rtc@@QEAA@PEAVSocket@1@@Z
    MCAPI explicit AsyncTCPSocket(class rtc::Socket*);

    // NOLINTEND
};

}; // namespace rtc
