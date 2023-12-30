#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncResolverInterface; }
namespace rtc { class PhysicalSocketServer; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class PhysicalSocket {
public:
    // prevent constructor by default
    PhysicalSocket& operator=(PhysicalSocket const&);
    PhysicalSocket(PhysicalSocket const&);
    PhysicalSocket();

public:
    // NOLINTBEGIN
    // symbol: ?Accept@PhysicalSocket@rtc@@UEAAPEAVSocket@2@PEAVSocketAddress@2@@Z
    MCVAPI class rtc::Socket* Accept(class rtc::SocketAddress*);

    // symbol: ?Bind@PhysicalSocket@rtc@@UEAAHAEBVSocketAddress@2@@Z
    MCVAPI int Bind(class rtc::SocketAddress const&);

    // symbol: ?Close@PhysicalSocket@rtc@@UEAAHXZ
    MCVAPI int Close();

    // symbol: ?Connect@PhysicalSocket@rtc@@UEAAHAEBVSocketAddress@2@@Z
    MCVAPI int Connect(class rtc::SocketAddress const&);

    // symbol: ?Create@PhysicalSocket@rtc@@UEAA_NHH@Z
    MCVAPI bool Create(int, int);

    // symbol: ?DisableEvents@PhysicalSocket@rtc@@MEAAXE@Z
    MCVAPI void DisableEvents(uchar);

    // symbol: ?DoAccept@PhysicalSocket@rtc@@MEAA_K_KPEAUsockaddr@@PEAH@Z
    MCVAPI uint64 DoAccept(uint64, struct sockaddr*, int*);

    // symbol: ?DoSend@PhysicalSocket@rtc@@MEAAH_KPEBDHH@Z
    MCVAPI int DoSend(uint64, char const*, int, int);

    // symbol: ?DoSendTo@PhysicalSocket@rtc@@MEAAH_KPEBDHHPEBUsockaddr@@H@Z
    MCVAPI int DoSendTo(uint64, char const*, int, int, struct sockaddr const*, int);

    // symbol: ?EnableEvents@PhysicalSocket@rtc@@MEAAXE@Z
    MCVAPI void EnableEvents(uchar);

    // symbol: ?GetError@PhysicalSocket@rtc@@UEBAHXZ
    MCVAPI int GetError() const;

    // symbol: ?GetLocalAddress@PhysicalSocket@rtc@@UEBA?AVSocketAddress@2@XZ
    MCVAPI class rtc::SocketAddress GetLocalAddress() const;

    // symbol: ?GetOption@PhysicalSocket@rtc@@UEAAHW4Option@Socket@2@PEAH@Z
    MCVAPI int GetOption(::rtc::Socket::Option, int*);

    // symbol: ?GetRemoteAddress@PhysicalSocket@rtc@@UEBA?AVSocketAddress@2@XZ
    MCVAPI class rtc::SocketAddress GetRemoteAddress() const;

    // symbol: ?GetState@PhysicalSocket@rtc@@UEBA?AW4ConnState@Socket@2@XZ
    MCVAPI ::rtc::Socket::ConnState GetState() const;

    // symbol: ?Listen@PhysicalSocket@rtc@@UEAAHH@Z
    MCVAPI int Listen(int);

    // symbol: ?Recv@PhysicalSocket@rtc@@UEAAHPEAX_KPEA_J@Z
    MCVAPI int Recv(void*, uint64, int64*);

    // symbol: ?RecvFrom@PhysicalSocket@rtc@@UEAAHPEAX_KPEAVSocketAddress@2@PEA_J@Z
    MCVAPI int RecvFrom(void*, uint64, class rtc::SocketAddress*, int64*);

    // symbol: ?Send@PhysicalSocket@rtc@@UEAAHPEBX_K@Z
    MCVAPI int Send(void const*, uint64);

    // symbol: ?SendTo@PhysicalSocket@rtc@@UEAAHPEBX_KAEBVSocketAddress@2@@Z
    MCVAPI int SendTo(void const*, uint64, class rtc::SocketAddress const&);

    // symbol: ?SetEnabledEvents@PhysicalSocket@rtc@@MEAAXE@Z
    MCVAPI void SetEnabledEvents(uchar);

    // symbol: ?SetError@PhysicalSocket@rtc@@UEAAXH@Z
    MCVAPI void SetError(int);

    // symbol: ?SetOption@PhysicalSocket@rtc@@UEAAHW4Option@Socket@2@H@Z
    MCVAPI int SetOption(::rtc::Socket::Option, int);

    // symbol: ??1PhysicalSocket@rtc@@UEAA@XZ
    MCVAPI ~PhysicalSocket();

    // symbol: ??0PhysicalSocket@rtc@@QEAA@PEAVPhysicalSocketServer@1@_K@Z
    MCAPI PhysicalSocket(class rtc::PhysicalSocketServer*, uint64);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?DoConnect@PhysicalSocket@rtc@@IEAAHAEBVSocketAddress@2@@Z
    MCAPI int DoConnect(class rtc::SocketAddress const&);

    // symbol: ?DoReadFromSocket@PhysicalSocket@rtc@@IEAAHPEAX_KPEAVSocketAddress@2@PEA_J@Z
    MCAPI int DoReadFromSocket(void*, uint64, class rtc::SocketAddress*, int64*);

    // symbol: ?OnResolveResult@PhysicalSocket@rtc@@IEAAXPEAVAsyncResolverInterface@2@@Z
    MCAPI void OnResolveResult(class rtc::AsyncResolverInterface*);

    // symbol: ?TranslateOption@PhysicalSocket@rtc@@IEAAHW4Option@Socket@2@PEAH1@Z
    MCAPI int TranslateOption(::rtc::Socket::Option, int*, int*);

    // symbol: ?UpdateLastError@PhysicalSocket@rtc@@IEAAXXZ
    MCAPI void UpdateLastError();

    // NOLINTEND
};

}; // namespace rtc
