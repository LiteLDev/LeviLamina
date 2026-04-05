#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketSocketTcpOptions; }
namespace rtc { struct ProxyInfo; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

namespace rtc {

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

    virtual ::std::unique_ptr<::rtc::AsyncPacketSocket>
    CreateUdpSocket(::rtc::SocketAddress const& address, ushort min_port, ushort max_port) = 0;

    virtual ::std::shared_ptr<::rtc::AsyncPacketSocket>
    CreateGlobalUdpSocket(::rtc::SocketAddress const& address, ushort min_port, ushort max_port) = 0;

    virtual ::std::unique_ptr<::rtc::AsyncListenSocket>
    CreateServerTcpSocket(::rtc::SocketAddress const& local_address, ushort min_port, ushort max_port, int opts) = 0;

    virtual ::std::unique_ptr<::rtc::AsyncPacketSocket> CreateClientTcpSocket(
        ::rtc::SocketAddress const&          local_address,
        ::rtc::SocketAddress const&          remote_address,
        ::rtc::ProxyInfo const&              proxy_info,
        ::std::string const&                 user_agent,
        ::rtc::PacketSocketTcpOptions const& tcp_options
    ) = 0;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
