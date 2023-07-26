#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AABBPred {

public:
    // prevent constructor by default
    AABBPred& operator=(AABBPred const&) = delete;
    AABBPred(AABBPred const&)            = delete;
    AABBPred()                           = delete;

public:
    /**
     * @symbol ??RAABBPred\@\@QEBA_NAEBVAABB\@\@0\@Z
     */
    MCAPI bool operator()(class AABB const&, class AABB const&) const; // NOLINT
};
