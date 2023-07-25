#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AABBPred {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBPRED
public:
    AABBPred& operator=(AABBPred const&) = delete;
    AABBPred(AABBPred const&)            = delete;
    AABBPred()                           = delete;
#endif

public:
    /**
     * @symbol ??RAABBPred\@\@QEBA_NAEBVAABB\@\@0\@Z
     */
    MCAPI bool operator()(class AABB const&, class AABB const&) const;
};
