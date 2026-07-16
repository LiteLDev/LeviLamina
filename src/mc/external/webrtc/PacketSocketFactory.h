#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class AsyncListenSocket; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class SocketAddress; }
namespace webrtc { struct PacketSocketTcpOptions; }
// clang-format on

namespace webrtc {

class PacketSocketFactory {
public:
    // PacketSocketFactory inner types define
    enum class Options : int {
        // bitfield representation
        TlsFake     = 1 << 0,
        Ssltcp      = 1 << 0,
        Tls         = 1 << 1,
        Stun        = 1 << 2,
        TlsInsecure = 1 << 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketSocketFactory() = default;

    virtual ::std::unique_ptr<::webrtc::AsyncPacketSocket>
    CreateUdpSocket(::webrtc::SocketAddress const& address, ushort min_port, ushort max_port) = 0;

    virtual ::std::shared_ptr<::webrtc::AsyncPacketSocket>
    CreateGlobalUdpSocket(::webrtc::SocketAddress const& address, ushort min_port, ushort max_port) = 0;

    virtual ::std::unique_ptr<::webrtc::AsyncListenSocket>
    CreateServerTcpSocket(::webrtc::SocketAddress const& local_address, ushort min_port, ushort max_port, int opts) = 0;

    virtual ::std::unique_ptr<::webrtc::AsyncPacketSocket> CreateClientTcpSocket(
        ::webrtc::SocketAddress const&          local_address,
        ::webrtc::SocketAddress const&          remote_address,
        ::webrtc::PacketSocketTcpOptions const& tcp_options
    ) = 0;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
