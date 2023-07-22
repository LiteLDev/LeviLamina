/**
 * @file  AABBPred.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AABBPred.
 *
 */
class AABBPred {

#define AFTER_EXTRA
    // Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBPRED
public:
    class AABBPred& operator=(class AABBPred const &) = delete;
    AABBPred(class AABBPred const &) = delete;
    AABBPred() = delete;
#endif

public:
    /**
     * @symbol  ??RAABBPred\@\@QEBA_NAEBVAABB\@\@0\@Z
     */
    MCAPI bool operator()(class AABB const &, class AABB const &) const;

};