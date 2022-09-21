/**
 * @file  MC/LegacySwampFoliageFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacySwampFoliageFeature.
 *
 */
class LegacySwampFoliageFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSWAMPFOLIAGEFEATURE
public:
    class LegacySwampFoliageFeature& operator=(class LegacySwampFoliageFeature const &) = delete;
    LegacySwampFoliageFeature(class LegacySwampFoliageFeature const &) = delete;
    LegacySwampFoliageFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LegacySwampFoliageFeature();
    /**
     * @hash   1593038798
     * @vftbl  3
     * @symbol ?place@LegacySwampFoliageFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -374498733
     * @symbol ??0LegacySwampFoliageFeature@@QEAA@AEAVFeatureRegistry@@@Z
     */
    MCAPI LegacySwampFoliageFeature(class FeatureRegistry &);

};