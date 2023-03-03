/**
 * @file  CoralHangFeature.hpp
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
 * @brief MC class CoralHangFeature.
 *
 */
class CoralHangFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALHANGFEATURE
public:
    class CoralHangFeature& operator=(class CoralHangFeature const &) = delete;
    CoralHangFeature(class CoralHangFeature const &) = delete;
    CoralHangFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CoralHangFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@CoralHangFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};