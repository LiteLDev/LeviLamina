#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class SocketCache {
public:
    // SocketCache inner types declare
    // clang-format off
    struct SocketPool;
    // clang-format on

    // SocketCache inner types define
    struct SocketPool {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnkac4c07;
        ::ll::UntypedStorage<4, 4>  mUnk9c9bee;
        // NOLINTEND

    public:
        // prevent constructor by default
        SocketPool& operator=(SocketPool const&);
        SocketPool(SocketPool const&);
        SocketPool();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3c893a;
    ::ll::UntypedStorage<8, 48> mUnkcdd4d1;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketCache& operator=(SocketCache const&);
    SocketCache(SocketCache const&);
    SocketCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::AsyncPacketSocket> _tryCreateSocket(
        ::webrtc::SocketAddress const& address,
        ushort                         minPort,
        ushort                         maxPort,
        ::brstd::flat_map<
            ushort,
            ::std::weak_ptr<::webrtc::AsyncPacketSocket>,
            ::std::less<ushort>,
            ::std::vector<ushort>,
            ::std::vector<::std::weak_ptr<::webrtc::AsyncPacketSocket>>>& ports
    );

    MCNAPI ::std::shared_ptr<::webrtc::AsyncPacketSocket>
    createGlobalUdpSocket(::webrtc::SocketAddress const& address, ushort minPort, ushort maxPort);
    // NOLINTEND
};

} // namespace NetherNet
