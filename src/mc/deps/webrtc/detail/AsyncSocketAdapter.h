#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncSocketAdapter {
public:
    // prevent constructor by default
    AsyncSocketAdapter& operator=(AsyncSocketAdapter const&);
    AsyncSocketAdapter(AsyncSocketAdapter const&);
    AsyncSocketAdapter();

public:
    // NOLINTBEGIN
    // symbol: ?Accept@AsyncSocketAdapter@rtc@@UEAAPEAVSocket@2@PEAVSocketAddress@2@@Z
    MCVAPI class rtc::Socket* Accept(class rtc::SocketAddress*);

    // symbol: ?Bind@AsyncSocketAdapter@rtc@@UEAAHAEBVSocketAddress@2@@Z
    MCVAPI int Bind(class rtc::SocketAddress const&);

    // symbol: ?Close@AsyncSocketAdapter@rtc@@UEAAHXZ
    MCVAPI int Close();

    // symbol: ?Connect@AsyncSocketAdapter@rtc@@UEAAHAEBVSocketAddress@2@@Z
    MCVAPI int Connect(class rtc::SocketAddress const&);

    // symbol: ?GetError@AsyncSocketAdapter@rtc@@UEBAHXZ
    MCVAPI int GetError() const;

    // symbol: ?GetLocalAddress@AsyncSocketAdapter@rtc@@UEBA?AVSocketAddress@2@XZ
    MCVAPI class rtc::SocketAddress GetLocalAddress() const;

    // symbol: ?GetOption@AsyncSocketAdapter@rtc@@UEAAHW4Option@Socket@2@PEAH@Z
    MCVAPI int GetOption(::rtc::Socket::Option, int*);

    // symbol: ?GetRemoteAddress@AsyncSocketAdapter@rtc@@UEBA?AVSocketAddress@2@XZ
    MCVAPI class rtc::SocketAddress GetRemoteAddress() const;

    // symbol: ?GetState@AsyncSocketAdapter@rtc@@UEBA?AW4ConnState@Socket@2@XZ
    MCVAPI ::rtc::Socket::ConnState GetState() const;

    // symbol: ?Listen@AsyncSocketAdapter@rtc@@UEAAHH@Z
    MCVAPI int Listen(int);

    // symbol: ?OnCloseEvent@AsyncSocketAdapter@rtc@@MEAAXPEAVSocket@2@H@Z
    MCVAPI void OnCloseEvent(class rtc::Socket*, int);

    // symbol: ?OnConnectEvent@AsyncSocketAdapter@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnConnectEvent(class rtc::Socket*);

    // symbol: ?OnReadEvent@AsyncSocketAdapter@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnReadEvent(class rtc::Socket*);

    // symbol: ?OnWriteEvent@AsyncSocketAdapter@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnWriteEvent(class rtc::Socket*);

    // symbol: ?Recv@AsyncSocketAdapter@rtc@@UEAAHPEAX_KPEA_J@Z
    MCVAPI int Recv(void*, uint64, int64*);

    // symbol: ?RecvFrom@AsyncSocketAdapter@rtc@@UEAAHPEAX_KPEAVSocketAddress@2@PEA_J@Z
    MCVAPI int RecvFrom(void*, uint64, class rtc::SocketAddress*, int64*);

    // symbol: ?Send@AsyncSocketAdapter@rtc@@UEAAHPEBX_K@Z
    MCVAPI int Send(void const*, uint64);

    // symbol: ?SendTo@AsyncSocketAdapter@rtc@@UEAAHPEBX_KAEBVSocketAddress@2@@Z
    MCVAPI int SendTo(void const*, uint64, class rtc::SocketAddress const&);

    // symbol: ?SetError@AsyncSocketAdapter@rtc@@UEAAXH@Z
    MCVAPI void SetError(int);

    // symbol: ?SetOption@AsyncSocketAdapter@rtc@@UEAAHW4Option@Socket@2@H@Z
    MCVAPI int SetOption(::rtc::Socket::Option, int);

    // symbol: ??1AsyncSocketAdapter@rtc@@UEAA@XZ
    MCVAPI ~AsyncSocketAdapter();

    // symbol: ??0AsyncSocketAdapter@rtc@@QEAA@PEAVSocket@1@@Z
    MCAPI explicit AsyncSocketAdapter(class rtc::Socket*);

    // NOLINTEND
};

}; // namespace rtc
