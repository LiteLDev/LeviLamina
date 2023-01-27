/**
 * @file  HellSpringFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HellSpringFeature.
 *
 */
class HellSpringFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HELLSPRINGFEATURE
public:
    class HellSpringFeature& operator=(class HellSpringFeature const &) = delete;
    HellSpringFeature(class HellSpringFeature const &) = delete;
    HellSpringFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HellSpringFeature();
    /**
     * @hash   -707227434
     * @vftbl  3
     * @symbol  ?place\@HellSpringFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -1617069532
     * @symbol  ??0HellSpringFeature\@\@QEAA\@AEBVBlock\@\@_N\@Z
     */
    MCAPI HellSpringFeature(class Block const &, bool);

};