#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct MappedAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk91d548;
    ::ll::UntypedStorage<2, 2> mUnk3d39e1;
    ::ll::UntypedStorage<8, 32> mUnkd33126;
    ::ll::UntypedStorage<2, 2> mUnkd6b8de;
    // NOLINTEND

public:
    // prevent constructor by default
    MappedAddress& operator=(MappedAddress const&);
    MappedAddress(MappedAddress const&);
    MappedAddress();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MappedAddress();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
