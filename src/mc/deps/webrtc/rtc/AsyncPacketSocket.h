#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class AsyncPacketSocket {
public:
    // AsyncPacketSocket inner types define
    enum class State {};

public:
    // prevent constructor by default
    AsyncPacketSocket& operator=(AsyncPacketSocket const&);
    AsyncPacketSocket(AsyncPacketSocket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AsyncPacketSocket@rtc@@UEAA@XZ
    virtual ~AsyncPacketSocket();

    // vIndex: 1, symbol: ?GetLocalAddress@AsyncTCPSocketBase@rtc@@UEBA?AVSocketAddress@2@XZ
    virtual class rtc::SocketAddress GetLocalAddress() const = 0;

    // vIndex: 2, symbol: ?GetRemoteAddress@AsyncTCPSocketBase@rtc@@UEBA?AVSocketAddress@2@XZ
    virtual class rtc::SocketAddress GetRemoteAddress() const = 0;

    // vIndex: 3, symbol: ?Send@AsyncStunTCPSocket@cricket@@UEAAHPEBX_KAEBUPacketOptions@rtc@@@Z
    virtual int Send(void const*, uint64, struct rtc::PacketOptions const&) = 0;

    // vIndex: 4, symbol: ?SendTo@AsyncTCPSocketBase@rtc@@UEAAHPEBX_KAEBVSocketAddress@2@AEBUPacketOptions@2@@Z
    virtual int SendTo(void const*, uint64, class rtc::SocketAddress const&, struct rtc::PacketOptions const&) = 0;

    // vIndex: 5, symbol: ?Close@AsyncTCPSocketBase@rtc@@UEAAHXZ
    virtual int Close() = 0;

    // vIndex: 6, symbol: ?GetState@AsyncTCPSocketBase@rtc@@UEBA?AW4State@AsyncPacketSocket@2@XZ
    virtual ::rtc::AsyncPacketSocket::State GetState() const = 0;

    // vIndex: 7, symbol: ?GetOption@AsyncTCPSocketBase@rtc@@UEAAHW4Option@Socket@2@PEAH@Z
    virtual int GetOption(::rtc::Socket::Option, int*) = 0;

    // vIndex: 8, symbol: ?SetOption@AsyncTCPSocketBase@rtc@@UEAAHW4Option@Socket@2@H@Z
    virtual int SetOption(::rtc::Socket::Option, int) = 0;

    // vIndex: 9, symbol: ?GetError@AsyncTCPSocketBase@rtc@@UEBAHXZ
    virtual int GetError() const = 0;

    // vIndex: 10, symbol: ?SetError@AsyncTCPSocketBase@rtc@@UEAAXH@Z
    virtual void SetError(int) = 0;

    // vIndex: 11, symbol: ?ProcessInput@AsyncStunTCPSocket@cricket@@UEAAXPEADPEA_K@Z
    virtual void ProcessInput(char*, uint64*);

    // symbol: ??0AsyncPacketSocket@rtc@@QEAA@XZ
    MCAPI AsyncPacketSocket();

    // symbol: ?SubscribeClose@AsyncPacketSocket@rtc@@QEAAXPEBXV?$function@$$A6AXPEAVAsyncPacketSocket@rtc@@H@Z@std@@@Z
    MCAPI void SubscribeClose(void const*, std::function<void(class rtc::AsyncPacketSocket*, int)>);

    // symbol: ?UnsubscribeClose@AsyncPacketSocket@rtc@@QEAAXPEBX@Z
    MCAPI void UnsubscribeClose(void const*);

    // NOLINTEND
};

}; // namespace rtc
