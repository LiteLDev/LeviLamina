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
    virtual ~StaticStunServer();

    virtual ::std::optional<::webrtc::SocketAddress> Reflect(::webrtc::SocketAddress const& local) const = 0;
    // NOLINTEND
};

} // namespace webrtc
