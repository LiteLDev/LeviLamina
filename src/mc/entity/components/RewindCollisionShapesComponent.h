#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RewindCollisionShapesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkad7624;
    ::ll::UntypedStorage<8, 56> mUnk13a09c;
    ::ll::UntypedStorage<4, 24> mUnk2b1208;
    // NOLINTEND

public:
    // prevent constructor by default
    RewindCollisionShapesComponent& operator=(RewindCollisionShapesComponent const&);
    RewindCollisionShapesComponent(RewindCollisionShapesComponent const&);
    RewindCollisionShapesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RewindCollisionShapesComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
