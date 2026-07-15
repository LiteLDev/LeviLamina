#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PacketSocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class AsyncListenSocket; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Socket; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class SocketFactory; }
namespace webrtc { struct PacketSocketTcpOptions; }
// clang-format on

namespace webrtc {

class BasicPacketSocketFactory : public ::webrtc::PacketSocketFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk567ae1;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicPacketSocketFactory& operator=(BasicPacketSocketFactory const&);
    BasicPacketSocketFactory(BasicPacketSocketFactory const&);
    BasicPacketSocketFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicPacketSocketFactory() /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncPacketSocket>
    CreateUdpSocket(::webrtc::SocketAddress const& address, ushort min_port, ushort max_port) /*override*/;

    virtual ::std::shared_ptr<::webrtc::AsyncPacketSocket>
    CreateGlobalUdpSocket(::webrtc::SocketAddress const& address, ushort min_port, ushort max_port) /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncListenSocket> CreateServerTcpSocket(
        ::webrtc::SocketAddress const& local_address,
        ushort                         min_port,
        ushort                         max_port,
        int                            opts
    ) /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncPacketSocket> CreateClientTcpSocket(
        ::webrtc::SocketAddress const&          local_address,
        ::webrtc::SocketAddress const&          remote_address,
        ::webrtc::PacketSocketTcpOptions const& tcp_options
    ) /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicPacketSocketFactory(::webrtc::SocketFactory* socket_factory);

    MCNAPI int BindSocket(
        ::webrtc::Socket*              socket,
        ::webrtc::SocketAddress const& local_address,
        ushort                         min_port,
        ushort                         max_port
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SocketFactory* socket_factory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::AsyncPacketSocket>
    $CreateUdpSocket(::webrtc::SocketAddress const& address, ushort min_port, ushort max_port);

    MCNAPI ::std::shared_ptr<::webrtc::AsyncPacketSocket>
    $CreateGlobalUdpSocket(::webrtc::SocketAddress const& address, ushort min_port, ushort max_port);

    MCNAPI ::std::unique_ptr<::webrtc::AsyncListenSocket>
    $CreateServerTcpSocket(::webrtc::SocketAddress const& local_address, ushort min_port, ushort max_port, int opts);

    MCNAPI ::std::unique_ptr<::webrtc::AsyncPacketSocket> $CreateClientTcpSocket(
        ::webrtc::SocketAddress const&          local_address,
        ::webrtc::SocketAddress const&          remote_address,
        ::webrtc::PacketSocketTcpOptions const& tcp_options
    );

    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $CreateAsyncDnsResolver();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
