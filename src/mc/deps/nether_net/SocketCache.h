#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class IPAddress; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class SocketCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3c893a;
    ::ll::UntypedStorage<8, 48> mUnkd48f54;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketCache& operator=(SocketCache const&);
    SocketCache(SocketCache const&);
    SocketCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::webrtc::AsyncPacketSocket>
    createGlobalUdpSocket(::webrtc::SocketAddress const& address, ushort minPort, ushort maxPort);
    // NOLINTEND
};

} // namespace NetherNet
