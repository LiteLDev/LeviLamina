/**
 * @file  LegacySpringsFeature.hpp
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
 * @brief MC class LegacySpringsFeature.
 *
 */
class LegacySpringsFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSPRINGSFEATURE
public:
    class LegacySpringsFeature& operator=(class LegacySpringsFeature const &) = delete;
    LegacySpringsFeature(class LegacySpringsFeature const &) = delete;
    LegacySpringsFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LegacySpringsFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@LegacySpringsFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0LegacySpringsFeature\@\@QEAA\@AEBVFeatureRegistry\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI LegacySpringsFeature(class FeatureRegistry const &, class BaseGameVersion const &);

};