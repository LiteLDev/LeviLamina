#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkRoute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk165e53;
    ::ll::UntypedStorage<4, 12> mUnka62327;
    ::ll::UntypedStorage<4, 12> mUnk939f8d;
    ::ll::UntypedStorage<4, 4>  mUnk6dfd4e;
    ::ll::UntypedStorage<4, 4>  mUnk34fc22;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkRoute& operator=(NetworkRoute const&);
    NetworkRoute(NetworkRoute const&);
    NetworkRoute();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string DebugString() const;

    MCNAPI bool operator==(::webrtc::NetworkRoute const& other) const;
    // NOLINTEND
};

} // namespace webrtc
