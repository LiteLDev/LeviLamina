#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct MappedAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk18bffe;
    ::ll::UntypedStorage<2, 2> mUnk3d39e1;
    ::ll::UntypedStorage<8, 8> mUnk951319;
    ::ll::UntypedStorage<2, 2> mUnkd6b8de;
    // NOLINTEND

public:
    // prevent constructor by default
    MappedAddress& operator=(MappedAddress const&);
    MappedAddress(MappedAddress const&);
    MappedAddress();
};

} // namespace NetherNet
