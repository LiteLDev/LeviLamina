/**
 * @file  RopeAABB.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


struct RopeAABB {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEAABB
public:
    struct RopeAABB& operator=(struct RopeAABB const &) = delete;
    RopeAABB(struct RopeAABB const &) = delete;
    RopeAABB() = delete;
#endif

public:
    /**
     * @symbol  ?getContactPoint\@RopeAABB\@\@QEBA_NAEBVVec3\@\@MAEAUAABBContactPoint\@\@\@Z
     */
    MCAPI bool getContactPoint(class Vec3 const &, float, struct AABBContactPoint &) const;

};