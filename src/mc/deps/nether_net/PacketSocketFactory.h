#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BasicPacketSocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

namespace NetherNet {

class PacketSocketFactory : public ::rtc::BasicPacketSocketFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk765ab2;
    ::ll::UntypedStorage<8, 16> mUnk50651e;
    ::ll::UntypedStorage<8, 8>  mUnka96575;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSocketFactory& operator=(PacketSocketFactory const&);
    PacketSocketFactory(PacketSocketFactory const&);
    PacketSocketFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketSocketFactory() /*override*/ = default;

    // vIndex: 2
    virtual ::std::shared_ptr<::rtc::AsyncPacketSocket>
    CreateGlobalUdpSocket(::rtc::SocketAddress const& address, ushort minPort, ushort maxPort) /*override*/;

    // vIndex: 5
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::rtc::AsyncPacketSocket>
    $CreateGlobalUdpSocket(::rtc::SocketAddress const& address, ushort minPort, ushort maxPort);

    MCNAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $CreateAsyncDnsResolver();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
