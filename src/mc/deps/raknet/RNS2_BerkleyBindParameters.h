#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RNS2_BerkleyBindParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk5aba32;
    ::ll::UntypedStorage<8, 8> mUnk62fbc4;
    ::ll::UntypedStorage<2, 2> mUnk8643e8;
    ::ll::UntypedStorage<4, 4> mUnk7c32a9;
    ::ll::UntypedStorage<4, 4> mUnk654105;
    ::ll::UntypedStorage<1, 1> mUnk651633;
    ::ll::UntypedStorage<4, 4> mUnk8cc3d7;
    ::ll::UntypedStorage<4, 4> mUnkb6239a;
    ::ll::UntypedStorage<4, 4> mUnkea7ae7;
    ::ll::UntypedStorage<4, 4> mUnkba0640;
    ::ll::UntypedStorage<8, 8> mUnk92f343;
    ::ll::UntypedStorage<2, 2> mUnke3f4ef;
    // NOLINTEND

public:
    // prevent constructor by default
    RNS2_BerkleyBindParameters& operator=(RNS2_BerkleyBindParameters const&);
    RNS2_BerkleyBindParameters(RNS2_BerkleyBindParameters const&);
    RNS2_BerkleyBindParameters();
};

} // namespace RakNet
