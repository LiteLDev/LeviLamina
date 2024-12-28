#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBShapeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk9bd6b8;
    ::ll::UntypedStorage<4, 8>  mUnk52c2dd;
    // NOLINTEND

public:
    // prevent constructor by default
    AABBShapeComponent(AABBShapeComponent const&);
    AABBShapeComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AABBShapeComponent& operator=(::AABBShapeComponent const&);
    // NOLINTEND
};
