#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/PacketSocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { class SocketFactory; }
namespace rtc { struct PacketSocketTcpOptions; }
namespace rtc { struct ProxyInfo; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

namespace rtc {

class BasicPacketSocketFactory : public ::rtc::PacketSocketFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb730be;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicPacketSocketFactory& operator=(BasicPacketSocketFactory const&);
    BasicPacketSocketFactory(BasicPacketSocketFactory const&);
    BasicPacketSocketFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicPacketSocketFactory() /*override*/ = default;

    // vIndex: 1
    virtual ::rtc::AsyncPacketSocket* CreateUdpSocket(::rtc::SocketAddress const&, ushort, ushort) /*override*/;

    // vIndex: 2
    virtual ::rtc::AsyncListenSocket*
    CreateServerTcpSocket(::rtc::SocketAddress const&, ushort, ushort, int) /*override*/;

    // vIndex: 3
    virtual ::rtc::AsyncPacketSocket*
    CreateClientTcpSocket(::rtc::SocketAddress const&, ::rtc::SocketAddress const&, ::rtc::ProxyInfo const&, ::std::string const&, ::rtc::PacketSocketTcpOptions const&) /*override*/
        ;

    // vIndex: 4
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicPacketSocketFactory(::rtc::SocketFactory*);

    MCNAPI int BindSocket(::rtc::Socket*, ::rtc::SocketAddress const&, ushort, ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::SocketFactory*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
