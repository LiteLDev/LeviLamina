#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBRelativeSizeUpdateComponent {
public:
    // prevent constructor by default
    AABBRelativeSizeUpdateComponent& operator=(AABBRelativeSizeUpdateComponent const&);
    AABBRelativeSizeUpdateComponent(AABBRelativeSizeUpdateComponent const&);
    AABBRelativeSizeUpdateComponent();

public:
    // NOLINTBEGIN
    MCAPI struct AABBRelativeSizeUpdateComponent& operator=(struct AABBRelativeSizeUpdateComponent&&);

    // NOLINTEND
};
