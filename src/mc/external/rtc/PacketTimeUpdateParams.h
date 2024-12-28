#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct PacketTimeUpdateParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk26642b;
    ::ll::UntypedStorage<8, 24> mUnk12cf9f;
    ::ll::UntypedStorage<4, 4>  mUnk4dfae6;
    ::ll::UntypedStorage<8, 8>  mUnk4baa83;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketTimeUpdateParams& operator=(PacketTimeUpdateParams const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketTimeUpdateParams();

    MCAPI PacketTimeUpdateParams(::rtc::PacketTimeUpdateParams const&);

    MCAPI ~PacketTimeUpdateParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::rtc::PacketTimeUpdateParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
