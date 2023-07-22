/**
 * @file  BuryDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BuryDescription.
 *
 */
class BuryDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURYDESCRIPTION
public:
    class BuryDescription& operator=(class BuryDescription const &) = delete;
    BuryDescription(class BuryDescription const &) = delete;
    BuryDescription() = delete;
#endif

public:
    /**
     * @symbol  ??0BuryDescription\@\@QEAA\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI BuryDescription(class BoundingBox const &);
    /**
     * @symbol  ?calculateContribution\@BuryDescription\@\@QEBAMAEBVBlockPos\@\@\@Z
     */
    MCAPI float calculateContribution(class BlockPos const &) const;

};