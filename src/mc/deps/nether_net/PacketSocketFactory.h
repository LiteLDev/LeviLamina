#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BasicPacketSocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class PacketSocketFactory : public ::webrtc::BasicPacketSocketFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk765ab2;
    ::ll::UntypedStorage<8, 16> mUnk50651e;
    ::ll::UntypedStorage<8, 8>  mUnk1a92ad;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSocketFactory& operator=(PacketSocketFactory const&);
    PacketSocketFactory(PacketSocketFactory const&);
    PacketSocketFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketSocketFactory() /*override*/ = default;

    virtual ::std::unique_ptr<::webrtc::AsyncPacketSocket>
    CreateUdpSocket(::webrtc::SocketAddress const& address, ushort min_port, ushort max_port) /*override*/;

    virtual ::std::shared_ptr<::webrtc::AsyncPacketSocket>
    CreateGlobalUdpSocket(::webrtc::SocketAddress const& address, ushort min_port, ushort max_port) /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
