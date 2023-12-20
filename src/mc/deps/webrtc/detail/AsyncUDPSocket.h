#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/AsyncPacketSocket.h"
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class AsyncUDPSocket : public ::rtc::AsyncPacketSocket {
public:
    // prevent constructor by default
    AsyncUDPSocket& operator=(AsyncUDPSocket const&);
    AsyncUDPSocket(AsyncUDPSocket const&);
    AsyncUDPSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AsyncUDPSocket@rtc@@UEAA@XZ
    virtual ~AsyncUDPSocket() = default;

    // vIndex: 1, symbol: ?GetLocalAddress@AsyncUDPSocket@rtc@@UEBA?AVSocketAddress@2@XZ
    virtual class rtc::SocketAddress GetLocalAddress() const;

    // vIndex: 2, symbol: ?GetRemoteAddress@AsyncUDPSocket@rtc@@UEBA?AVSocketAddress@2@XZ
    virtual class rtc::SocketAddress GetRemoteAddress() const;

    // vIndex: 3, symbol: ?Send@AsyncUDPSocket@rtc@@UEAAHPEBX_KAEBUPacketOptions@2@@Z
    virtual int Send(void const*, uint64, struct rtc::PacketOptions const&);

    // vIndex: 4, symbol: ?SendTo@AsyncUDPSocket@rtc@@UEAAHPEBX_KAEBVSocketAddress@2@AEBUPacketOptions@2@@Z
    virtual int SendTo(void const*, uint64, class rtc::SocketAddress const&, struct rtc::PacketOptions const&);

    // vIndex: 5, symbol: ?Close@AsyncUDPSocket@rtc@@UEAAHXZ
    virtual int Close();

    // vIndex: 6, symbol: ?GetState@AsyncUDPSocket@rtc@@UEBA?AW4State@AsyncPacketSocket@2@XZ
    virtual ::rtc::AsyncPacketSocket::State GetState() const;

    // vIndex: 7, symbol: ?GetOption@AsyncUDPSocket@rtc@@UEAAHW4Option@Socket@2@PEAH@Z
    virtual int GetOption(::rtc::Socket::Option, int*);

    // vIndex: 8, symbol: ?SetOption@AsyncUDPSocket@rtc@@UEAAHW4Option@Socket@2@H@Z
    virtual int SetOption(::rtc::Socket::Option, int);

    // vIndex: 9, symbol: ?GetError@AsyncUDPSocket@rtc@@UEBAHXZ
    virtual int GetError() const;

    // vIndex: 10, symbol: ?SetError@AsyncUDPSocket@rtc@@UEAAXH@Z
    virtual void SetError(int);

    // symbol: ??0AsyncUDPSocket@rtc@@QEAA@PEAVSocket@1@@Z
    MCAPI explicit AsyncUDPSocket(class rtc::Socket*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnReadEvent@AsyncUDPSocket@rtc@@AEAAXPEAVSocket@2@@Z
    MCAPI void OnReadEvent(class rtc::Socket*);

    // symbol: ?OnWriteEvent@AsyncUDPSocket@rtc@@AEAAXPEAVSocket@2@@Z
    MCAPI void OnWriteEvent(class rtc::Socket*);

    // NOLINTEND
};

}; // namespace rtc
