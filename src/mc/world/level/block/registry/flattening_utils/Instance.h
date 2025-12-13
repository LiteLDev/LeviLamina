#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlatteningUtils {

struct Instance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk73e163;
    ::ll::UntypedStorage<8, 64> mUnkc19403;
    ::ll::UntypedStorage<8, 96> mUnk1c2103;
    ::ll::UntypedStorage<8, 64> mUnk511b3d;
    ::ll::UntypedStorage<8, 32> mUnk69fed9;
    ::ll::UntypedStorage<8, 24> mUnk413ef2;
    // NOLINTEND

public:
    // prevent constructor by default
    Instance& operator=(Instance const&);
    Instance(Instance const&);
    Instance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Instance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace FlatteningUtils
