/**
 * @file  AABBBucket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure AABBBucket.
 *
 */
struct AABBBucket {

#define AFTER_EXTRA
    // Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBBUCKET
public:
    struct AABBBucket& operator=(struct AABBBucket const &) = delete;
    AABBBucket(struct AABBBucket const &) = delete;
    AABBBucket() = delete;
#endif

public:
    /**
     * @symbol ?mergeAABBs\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void mergeAABBs();

};