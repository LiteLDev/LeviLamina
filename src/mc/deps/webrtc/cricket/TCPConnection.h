#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Port; }
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace cricket {

class TCPConnection {
public:
    // prevent constructor by default
    TCPConnection& operator=(TCPConnection const&);
    TCPConnection(TCPConnection const&);
    TCPConnection();

public:
    // NOLINTBEGIN
    // symbol: ?GetError@TCPConnection@cricket@@UEAAHXZ
    MCVAPI int GetError();

    // symbol: ?OnConnectionRequestResponse@TCPConnection@cricket@@MEAAXPEAVStunRequest@2@PEAVStunMessage@2@@Z
    MCVAPI void OnConnectionRequestResponse(class cricket::StunRequest*, class cricket::StunMessage*);

    // symbol: ?Send@TCPConnection@cricket@@UEAAHPEBX_KAEBUPacketOptions@rtc@@@Z
    MCVAPI int Send(void const*, uint64, struct rtc::PacketOptions const&);

    // symbol: ??1TCPConnection@cricket@@UEAA@XZ
    MCVAPI ~TCPConnection();

    // symbol: ??0TCPConnection@cricket@@QEAA@V?$WeakPtr@VPort@cricket@@@rtc@@AEBVCandidate@1@PEAVAsyncPacketSocket@3@@Z
    MCAPI
    TCPConnection(class rtc::WeakPtr<class cricket::Port>, class cricket::Candidate const&, class rtc::AsyncPacketSocket*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ConnectSocketSignals@TCPConnection@cricket@@AEAAXPEAVAsyncPacketSocket@rtc@@@Z
    MCAPI void ConnectSocketSignals(class rtc::AsyncPacketSocket*);

    // symbol: ?CreateOutgoingTcpSocket@TCPConnection@cricket@@AEAAXXZ
    MCAPI void CreateOutgoingTcpSocket();

    // symbol: ?MaybeReconnect@TCPConnection@cricket@@AEAAXXZ
    MCAPI void MaybeReconnect();

    // symbol: ?OnClose@TCPConnection@cricket@@AEAAXPEAVAsyncPacketSocket@rtc@@H@Z
    MCAPI void OnClose(class rtc::AsyncPacketSocket*, int);

    // symbol: ?OnConnect@TCPConnection@cricket@@AEAAXPEAVAsyncPacketSocket@rtc@@@Z
    MCAPI void OnConnect(class rtc::AsyncPacketSocket*);

    // symbol: ?OnReadPacket@TCPConnection@cricket@@AEAAXPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@AEB_J@Z
    MCAPI void
    OnReadPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64 const&);

    // symbol: ?OnReadyToSend@TCPConnection@cricket@@AEAAXPEAVAsyncPacketSocket@rtc@@@Z
    MCAPI void OnReadyToSend(class rtc::AsyncPacketSocket*);

    // NOLINTEND
};

}; // namespace cricket
