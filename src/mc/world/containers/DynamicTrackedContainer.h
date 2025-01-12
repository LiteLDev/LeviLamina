#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynamicTrackedContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2ea795;
    ::ll::UntypedStorage<8, 16> mUnkeebd3d;
    ::ll::UntypedStorage<1, 1>  mUnk2f6e24;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicTrackedContainer& operator=(DynamicTrackedContainer const&);
    DynamicTrackedContainer(DynamicTrackedContainer const&);
    DynamicTrackedContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DynamicTrackedContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
