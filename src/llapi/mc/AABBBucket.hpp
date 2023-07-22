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
#endif

public:
    /**
     * @symbol  ??0AABBBucket\@\@QEAA\@XZ
     */
    MCAPI AABBBucket();
    /**
     * @symbol  ?clearDirty\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void clearDirty();
    /**
     * @symbol  ?clearNeedsFinalize\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void clearNeedsFinalize();
    /**
     * @symbol  ?isDirty\@AABBBucket\@\@QEAA_NXZ
     */
    MCAPI bool isDirty();
    /**
     * @symbol  ?markDirty\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void markDirty();
    /**
     * @symbol  ?mergeAABBs\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void mergeAABBs();
    /**
     * @symbol  ?needsFinalize\@AABBBucket\@\@QEBA_NXZ
     */
    MCAPI bool needsFinalize() const;

};