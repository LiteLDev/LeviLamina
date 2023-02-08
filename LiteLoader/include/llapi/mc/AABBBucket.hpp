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
     * @hash   1138259590
     * @symbol  ??0AABBBucket\@\@QEAA\@XZ
     */
    MCAPI AABBBucket();
    /**
     * @hash   756476261
     * @symbol  ?clearDirty\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void clearDirty();
    /**
     * @hash   239138709
     * @symbol  ?clearNeedsFinalize\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void clearNeedsFinalize();
    /**
     * @hash   476310988
     * @symbol  ?isDirty\@AABBBucket\@\@QEAA_NXZ
     */
    MCAPI bool isDirty();
    /**
     * @hash   -856740541
     * @symbol  ?markDirty\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void markDirty();
    /**
     * @hash   -904834203
     * @symbol  ?mergeAABBs\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void mergeAABBs();
    /**
     * @hash   -1004901294
     * @symbol  ?needsFinalize\@AABBBucket\@\@QEBA_NXZ
     */
    MCAPI bool needsFinalize() const;

};