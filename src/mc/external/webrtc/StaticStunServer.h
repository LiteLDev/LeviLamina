#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class StaticStunServer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticStunServer() = default;

    virtual ::std::optional<::webrtc::SocketAddress> Reflect(::webrtc::SocketAddress const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
