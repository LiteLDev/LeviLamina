/**
 * @file  AABBBucket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   489853670
     * @symbol ??0AABBBucket@@QEAA@XZ
     */
    MCAPI AABBBucket();
    /**
     * @hash   108070341
     * @symbol ?clearDirty@AABBBucket@@QEAAXXZ
     */
    MCAPI void clearDirty();
    /**
     * @hash   -409267211
     * @symbol ?clearNeedsFinalize@AABBBucket@@QEAAXXZ
     */
    MCAPI void clearNeedsFinalize();
    /**
     * @hash   -172094932
     * @symbol ?isDirty@AABBBucket@@QEAA_NXZ
     */
    MCAPI bool isDirty();
    /**
     * @hash   -13597581
     * @symbol ?markDirty@AABBBucket@@QEAAXXZ
     */
    MCAPI void markDirty();
    /**
     * @hash   -1553240123
     * @symbol ?mergeAABBs@AABBBucket@@QEAAXXZ
     */
    MCAPI void mergeAABBs();
    /**
     * @hash   -1653307214
     * @symbol ?needsFinalize@AABBBucket@@QEBA_NXZ
     */
    MCAPI bool needsFinalize() const;

};