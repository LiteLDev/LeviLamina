/**
 * @file  BeardDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeardDescription.
 *
 */
class BeardDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDDESCRIPTION
public:
    class BeardDescription& operator=(class BeardDescription const &) = delete;
    BeardDescription(class BeardDescription const &) = delete;
    BeardDescription() = delete;
#endif

public:
    /**
     * @symbol  ??0BeardDescription\@\@QEAA\@VBeardingDescriptionCache\@\@AEBUBeardKernel\@\@\@Z
     */
    MCAPI BeardDescription(class BeardingDescriptionCache, struct BeardKernel const &);
    /**
     * @symbol  ?calculateContribution\@BeardDescription\@\@QEBAMAEBVBlockPos\@\@\@Z
     */
    MCAPI float calculateContribution(class BlockPos const &) const;

};