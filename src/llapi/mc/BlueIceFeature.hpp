/**
 * @file  BlueIceFeature.hpp
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
 * @brief MC class BlueIceFeature.
 *
 */
class BlueIceFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLUEICEFEATURE
public:
    class BlueIceFeature& operator=(class BlueIceFeature const &) = delete;
    BlueIceFeature(class BlueIceFeature const &) = delete;
    BlueIceFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlueIceFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@BlueIceFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};