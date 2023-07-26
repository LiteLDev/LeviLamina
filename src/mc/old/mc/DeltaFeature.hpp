/**
 * @file  DeltaFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DeltaFeature.
 *
 */
class DeltaFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELTAFEATURE
public:
    class DeltaFeature& operator=(class DeltaFeature const &) = delete;
    DeltaFeature(class DeltaFeature const &) = delete;
    DeltaFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DeltaFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@DeltaFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol  ?_isValidPlacement\@DeltaFeature\@\@AEBA_NAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI bool _isValidPlacement(class BlockSource &, class BlockPos) const;

private:

};