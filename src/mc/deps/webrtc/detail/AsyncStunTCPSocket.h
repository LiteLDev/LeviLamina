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

namespace cricket {

class AsyncStunTCPSocket : public ::rtc::AsyncTCPSocketBase {
public:
    // prevent constructor by default
    AsyncStunTCPSocket& operator=(AsyncStunTCPSocket const&);
    AsyncStunTCPSocket(AsyncStunTCPSocket const&);
    AsyncStunTCPSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AsyncStunTCPSocket@cricket@@UEAA@XZ
    virtual ~AsyncStunTCPSocket() = default;

    // vIndex: 3, symbol: ?Send@AsyncStunTCPSocket@cricket@@UEAAHPEBX_KAEBUPacketOptions@rtc@@@Z
    virtual int Send(void const*, uint64, struct rtc::PacketOptions const&);

    // vIndex: 11, symbol: ?ProcessInput@AsyncStunTCPSocket@cricket@@UEAAXPEADPEA_K@Z
    virtual void ProcessInput(char*, uint64*);

    // symbol: ??0AsyncStunTCPSocket@cricket@@QEAA@PEAVSocket@rtc@@@Z
    MCAPI explicit AsyncStunTCPSocket(class rtc::Socket*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GetExpectedLength@AsyncStunTCPSocket@cricket@@AEAA_KPEBX_KPEAH@Z
    MCAPI uint64 GetExpectedLength(void const*, uint64, int*);

    // NOLINTEND
};

}; // namespace cricket
