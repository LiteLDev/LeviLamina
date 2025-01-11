#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketResult {
public:
    // PacketResult inner types declare
    // clang-format off
    class ReceiveTimeOrder;
    // clang-format on

    // PacketResult inner types define
    class ReceiveTimeOrder {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator()(::webrtc::PacketResult const&, ::webrtc::PacketResult const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk4a5522;
    ::ll::UntypedStorage<8, 8>  mUnkf44e81;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketResult& operator=(PacketResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketResult();

    MCAPI PacketResult(::webrtc::PacketResult const&);

    MCAPI ~PacketResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::PacketResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
