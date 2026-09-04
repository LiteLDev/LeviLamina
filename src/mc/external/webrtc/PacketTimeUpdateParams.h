#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketTimeUpdateParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk384f63;
    ::ll::UntypedStorage<8, 24> mUnkc6a789;
    ::ll::UntypedStorage<4, 4>  mUnkd5868a;
    ::ll::UntypedStorage<8, 8>  mUnkede7f7;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketTimeUpdateParams& operator=(PacketTimeUpdateParams const&);
    PacketTimeUpdateParams(PacketTimeUpdateParams const&);
    PacketTimeUpdateParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PacketTimeUpdateParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
