#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnke60561;
    ::ll::UntypedStorage<8, 56> mUnk530045;
    ::ll::UntypedStorage<8, 8>  mUnkcc4458;
    ::ll::UntypedStorage<1, 1>  mUnk39ab85;
    ::ll::UntypedStorage<8, 8>  mUnkf792d4;
    ::ll::UntypedStorage<1, 1>  mUnkeec839;
    ::ll::UntypedStorage<8, 8>  mUnk352000;
    ::ll::UntypedStorage<4, 16> mUnkb4b977;
    ::ll::UntypedStorage<8, 32> mUnk1ef5fe;
    ::ll::UntypedStorage<4, 4>  mUnka93787;
    ::ll::UntypedStorage<8, 8>  mUnkc401a0;
    ::ll::UntypedStorage<4, 4>  mUnk182f23;
    ::ll::UntypedStorage<4, 4>  mUnkfc6056;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetStatistics& operator=(RakNetStatistics const&);
    RakNetStatistics(RakNetStatistics const&);
    RakNetStatistics();
};

} // namespace RakNet
