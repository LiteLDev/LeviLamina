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
    virtual ~BasicPacketSocketFactory() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::rtc::AsyncPacketSocket> CreateUdpSocket(::rtc::SocketAddress const& address, ushort min_port, ushort max_port) /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::rtc::AsyncPacketSocket> CreateGlobalUdpSocket(::rtc::SocketAddress const& address, ushort min_port, ushort max_port) /*override*/;

    // vIndex: 3
    virtual ::std::unique_ptr<::rtc::AsyncListenSocket> CreateServerTcpSocket(::rtc::SocketAddress const& local_address, ushort min_port, ushort max_port, int opts) /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::rtc::AsyncPacketSocket> CreateClientTcpSocket(::rtc::SocketAddress const& local_address, ::rtc::SocketAddress const& remote_address, ::rtc::ProxyInfo const& proxy_info, ::std::string const& user_agent, ::rtc::PacketSocketTcpOptions const& tcp_options) /*override*/;

    // vIndex: 5
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicPacketSocketFactory(::rtc::SocketFactory* socket_factory);

    MCNAPI int BindSocket(::rtc::Socket* socket, ::rtc::SocketAddress const& local_address, ushort min_port, ushort max_port);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::SocketFactory* socket_factory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::rtc::AsyncPacketSocket> $CreateUdpSocket(::rtc::SocketAddress const& address, ushort min_port, ushort max_port);

    MCNAPI ::std::shared_ptr<::rtc::AsyncPacketSocket> $CreateGlobalUdpSocket(::rtc::SocketAddress const& address, ushort min_port, ushort max_port);

    MCNAPI ::std::unique_ptr<::rtc::AsyncListenSocket> $CreateServerTcpSocket(::rtc::SocketAddress const& local_address, ushort min_port, ushort max_port, int opts);

    MCNAPI ::std::unique_ptr<::rtc::AsyncPacketSocket> $CreateClientTcpSocket(::rtc::SocketAddress const& local_address, ::rtc::SocketAddress const& remote_address, ::rtc::ProxyInfo const& proxy_info, ::std::string const& user_agent, ::rtc::PacketSocketTcpOptions const& tcp_options);

    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $CreateAsyncDnsResolver();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
