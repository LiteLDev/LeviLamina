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

class AsyncTCPSocketBase : public ::rtc::AsyncPacketSocket {
public:
    // prevent constructor by default
    AsyncTCPSocketBase& operator=(AsyncTCPSocketBase const&);
    AsyncTCPSocketBase(AsyncTCPSocketBase const&);
    AsyncTCPSocketBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AsyncTCPSocketBase@rtc@@UEAA@XZ
    virtual ~AsyncTCPSocketBase();

    // vIndex: 1, symbol: ?GetLocalAddress@AsyncTCPSocketBase@rtc@@UEBA?AVSocketAddress@2@XZ
    virtual class rtc::SocketAddress GetLocalAddress() const;

    // vIndex: 2, symbol: ?GetRemoteAddress@AsyncTCPSocketBase@rtc@@UEBA?AVSocketAddress@2@XZ
    virtual class rtc::SocketAddress GetRemoteAddress() const;

    // vIndex: 4, symbol: ?SendTo@AsyncTCPSocketBase@rtc@@UEAAHPEBX_KAEBVSocketAddress@2@AEBUPacketOptions@2@@Z
    virtual int SendTo(void const*, uint64, class rtc::SocketAddress const&, struct rtc::PacketOptions const&);

    // vIndex: 5, symbol: ?Close@AsyncTCPSocketBase@rtc@@UEAAHXZ
    virtual int Close();

    // vIndex: 6, symbol: ?GetState@AsyncTCPSocketBase@rtc@@UEBA?AW4State@AsyncPacketSocket@2@XZ
    virtual ::rtc::AsyncPacketSocket::State GetState() const;

    // vIndex: 7, symbol: ?GetOption@AsyncTCPSocketBase@rtc@@UEAAHW4Option@Socket@2@PEAH@Z
    virtual int GetOption(::rtc::Socket::Option, int*);

    // vIndex: 8, symbol: ?SetOption@AsyncTCPSocketBase@rtc@@UEAAHW4Option@Socket@2@H@Z
    virtual int SetOption(::rtc::Socket::Option, int);

    // vIndex: 9, symbol: ?GetError@AsyncTCPSocketBase@rtc@@UEBAHXZ
    virtual int GetError() const;

    // vIndex: 10, symbol: ?SetError@AsyncTCPSocketBase@rtc@@UEAAXH@Z
    virtual void SetError(int);

    // symbol: ??0AsyncTCPSocketBase@rtc@@QEAA@PEAVSocket@1@_K@Z
    MCAPI AsyncTCPSocketBase(class rtc::Socket*, uint64);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?AppendToOutBuffer@AsyncTCPSocketBase@rtc@@IEAAXPEBX_K@Z
    MCAPI void AppendToOutBuffer(void const*, uint64);

    // symbol: ?FlushOutBuffer@AsyncTCPSocketBase@rtc@@IEAAHXZ
    MCAPI int FlushOutBuffer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnCloseEvent@AsyncTCPSocketBase@rtc@@AEAAXPEAVSocket@2@H@Z
    MCAPI void OnCloseEvent(class rtc::Socket*, int);

    // symbol: ?OnConnectEvent@AsyncTCPSocketBase@rtc@@AEAAXPEAVSocket@2@@Z
    MCAPI void OnConnectEvent(class rtc::Socket*);

    // symbol: ?OnReadEvent@AsyncTCPSocketBase@rtc@@AEAAXPEAVSocket@2@@Z
    MCAPI void OnReadEvent(class rtc::Socket*);

    // symbol: ?OnWriteEvent@AsyncTCPSocketBase@rtc@@AEAAXPEAVSocket@2@@Z
    MCAPI void OnWriteEvent(class rtc::Socket*);

    // NOLINTEND
};

}; // namespace rtc
