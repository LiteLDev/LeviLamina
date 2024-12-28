#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacedPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk469de6;
    ::ll::UntypedStorage<4, 4> mUnk4a1d3a;
    ::ll::UntypedStorage<4, 4> mUnk76edd2;
    ::ll::UntypedStorage<4, 4> mUnk59f281;
    ::ll::UntypedStorage<4, 4> mUnkdb5227;
    // NOLINTEND

public:
    // prevent constructor by default
    PacedPacketInfo& operator=(PacedPacketInfo const&);
    PacedPacketInfo(PacedPacketInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacedPacketInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
