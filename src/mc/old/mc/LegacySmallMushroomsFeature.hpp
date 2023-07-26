/**
 * @file  LegacySmallMushroomsFeature.hpp
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
 * @brief MC class LegacySmallMushroomsFeature.
 *
 */
class LegacySmallMushroomsFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSMALLMUSHROOMSFEATURE
public:
    class LegacySmallMushroomsFeature& operator=(class LegacySmallMushroomsFeature const &) = delete;
    LegacySmallMushroomsFeature(class LegacySmallMushroomsFeature const &) = delete;
    LegacySmallMushroomsFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LegacySmallMushroomsFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@LegacySmallMushroomsFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0LegacySmallMushroomsFeature\@\@QEAA\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacySmallMushroomsFeature(class FeatureRegistry const &);

};