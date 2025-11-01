#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class IPAddress; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class SocketCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk50509d;
    ::ll::UntypedStorage<8, 56> mUnka4351c;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketCache& operator=(SocketCache const&);
    SocketCache(SocketCache const&);
    SocketCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::rtc::AsyncPacketSocket>
    _tryGetCachedSocket(::rtc::SocketAddress const& address, ushort minPort, ushort maxPort);

    MCNAPI ::std::shared_ptr<::rtc::AsyncPacketSocket>
    createGlobalUdpSocket(::rtc::SocketAddress const& address, ushort minPort, ushort maxPort);
    // NOLINTEND
};

} // namespace NetherNet
