#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk4296fc;
    ::ll::UntypedStorage<4, 4>  mUnk1cc34d;
    ::ll::UntypedStorage<4, 4>  mUnk7cc9e8;
    ::ll::UntypedStorage<4, 4>  mUnkb0818f;
    ::ll::UntypedStorage<4, 4>  mUnka46072;
    ::ll::UntypedStorage<4, 4>  mUnkf6fbab;
    ::ll::UntypedStorage<1, 1>  mUnk68a627;
    ::ll::UntypedStorage<1, 1>  mUnk5f326e;
    ::ll::UntypedStorage<1, 1>  mUnkf77325;
    ::ll::UntypedStorage<1, 1>  mUnk6063ab;
    ::ll::UntypedStorage<4, 4>  mUnkeaee9f;
    ::ll::UntypedStorage<4, 4>  mUnk857ba9;
    ::ll::UntypedStorage<4, 4>  mUnk3d3978;
    // NOLINTEND

public:
    // prevent constructor by default
    MobDescriptor& operator=(MobDescriptor const&);
    MobDescriptor(MobDescriptor const&);
    MobDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MobDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
