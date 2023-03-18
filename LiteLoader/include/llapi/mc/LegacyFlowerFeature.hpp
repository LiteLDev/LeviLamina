/**
 * @file  LegacyFlowerFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyFlowerFeature.
 *
 */
class LegacyFlowerFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFLOWERFEATURE
public:
    class LegacyFlowerFeature& operator=(class LegacyFlowerFeature const &) = delete;
    LegacyFlowerFeature(class LegacyFlowerFeature const &) = delete;
    LegacyFlowerFeature() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@LegacyFlowerFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0LegacyFlowerFeature\@\@QEAA\@W4FlowerPlacementType\@\@\@Z
     */
    MCAPI LegacyFlowerFeature(enum class FlowerPlacementType);

};
