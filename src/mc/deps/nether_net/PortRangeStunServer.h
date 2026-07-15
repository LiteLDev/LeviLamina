#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StaticStunServer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class PortRangeStunServer : public ::webrtc::StaticStunServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk513424;
    ::ll::UntypedStorage<2, 2>  mUnk3d3440;
    ::ll::UntypedStorage<2, 2>  mUnk6705c3;
    ::ll::UntypedStorage<8, 32> mUnkdbbaae;
    ::ll::UntypedStorage<4, 4>  mUnk60db8a;
    // NOLINTEND

public:
    // prevent constructor by default
    PortRangeStunServer& operator=(PortRangeStunServer const&);
    PortRangeStunServer(PortRangeStunServer const&);
    PortRangeStunServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::webrtc::SocketAddress> Reflect(::webrtc::SocketAddress const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
