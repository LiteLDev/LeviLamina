/**
 * @file  LegacyForestRockFeature.hpp
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
 * @brief MC class LegacyForestRockFeature.
 *
 */
class LegacyForestRockFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFORESTROCKFEATURE
public:
    class LegacyForestRockFeature& operator=(class LegacyForestRockFeature const &) = delete;
    LegacyForestRockFeature(class LegacyForestRockFeature const &) = delete;
    LegacyForestRockFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LegacyForestRockFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@LegacyForestRockFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0LegacyForestRockFeature\@\@QEAA\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacyForestRockFeature(class FeatureRegistry const &);

};