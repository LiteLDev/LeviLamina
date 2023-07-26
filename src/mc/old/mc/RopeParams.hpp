/**
 * @file  RopeParams.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure RopeParams.
 *
 */
struct RopeParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEPARAMS
public:
    struct RopeParams& operator=(struct RopeParams const &) = delete;
    RopeParams(struct RopeParams const &) = delete;
#endif

public:
    /**
     * @symbol  ??0RopeParams\@\@QEAA\@XZ
     */
    MCAPI RopeParams();
    /**
     * @symbol  ??0RopeParams\@\@QEAA\@AEBVVec3\@\@0M\@Z
     */
    MCAPI RopeParams(class Vec3 const &, class Vec3 const &, float);
    /**
     * @symbol  ?leadInit\@RopeParams\@\@QEAAXXZ
     */
    MCAPI void leadInit();

};