#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntitySubsensorDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk378f1b;
    ::ll::UntypedStorage<4, 4> mUnkc56d21;
    ::ll::UntypedStorage<1, 1> mUnkc272c6;
    ::ll::UntypedStorage<4, 4> mUnkd28fc0;
    ::ll::UntypedStorage<4, 4> mUnke1ba9f;
    ::ll::UntypedStorage<4, 4> mUnk2f5a0f;
    ::ll::UntypedStorage<8, 32> mUnke372ff;
    ::ll::UntypedStorage<8, 64> mUnkd6ee8e;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySubsensorDescriptor& operator=(EntitySubsensorDescriptor const&);
    EntitySubsensorDescriptor(EntitySubsensorDescriptor const&);
    EntitySubsensorDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EntitySubsensorDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
