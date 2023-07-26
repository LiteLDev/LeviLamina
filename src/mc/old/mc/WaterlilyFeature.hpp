/**
 * @file  WaterlilyFeature.hpp
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
 * @brief MC class WaterlilyFeature.
 *
 */
class WaterlilyFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERLILYFEATURE
public:
    class WaterlilyFeature& operator=(class WaterlilyFeature const &) = delete;
    WaterlilyFeature(class WaterlilyFeature const &) = delete;
    WaterlilyFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WaterlilyFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@WaterlilyFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};