#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBHitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkd4f44d;
    ::ll::UntypedStorage<4, 12> mUnk889a80;
    ::ll::UntypedStorage<4, 12> mUnk30583b;
    ::ll::UntypedStorage<4, 12> mUnk8b847c;
    ::ll::UntypedStorage<1, 1>  mUnk8b4661;
    ::ll::UntypedStorage<1, 1>  mUnk853310;
    // NOLINTEND

public:
    // prevent constructor by default
    AABBHitResult& operator=(AABBHitResult const&);
    AABBHitResult(AABBHitResult const&);
    AABBHitResult();
};
