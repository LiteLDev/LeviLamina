#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AABBPred {
public:
    // prevent constructor by default
    AABBPred& operator=(AABBPred const&);
    AABBPred(AABBPred const&);
    AABBPred();

public:
    // NOLINTBEGIN
    // symbol: ??RAABBPred@@QEBA_NAEBVAABB@@0@Z
    MCAPI bool operator()(class AABB const&, class AABB const&) const;

    // NOLINTEND
};
