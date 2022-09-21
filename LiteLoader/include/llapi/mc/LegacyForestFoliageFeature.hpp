/**
 * @file  MC/LegacyForestFoliageFeature.hpp
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
 * @brief MC class LegacyForestFoliageFeature.
 *
 */
class LegacyForestFoliageFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFORESTFOLIAGEFEATURE
public:
    class LegacyForestFoliageFeature& operator=(class LegacyForestFoliageFeature const &) = delete;
    LegacyForestFoliageFeature(class LegacyForestFoliageFeature const &) = delete;
    LegacyForestFoliageFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LegacyForestFoliageFeature();
    /**
     * @hash   341495133
     * @vftbl  3
     * @symbol ?place@LegacyForestFoliageFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -1547996240
     * @symbol ??0LegacyForestFoliageFeature@@QEAA@W4Type@0@AEAVFeatureRegistry@@@Z
     */
    MCAPI LegacyForestFoliageFeature(enum LegacyForestFoliageFeature::Type, class FeatureRegistry &);

};