/**
 * @file  IcePatchFeature.hpp
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
 * @brief MC class IcePatchFeature.
 *
 */
class IcePatchFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICEPATCHFEATURE
public:
    class IcePatchFeature& operator=(class IcePatchFeature const &) = delete;
    IcePatchFeature(class IcePatchFeature const &) = delete;
    IcePatchFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IcePatchFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@IcePatchFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0IcePatchFeature\@\@QEAA\@H\@Z
     */
    MCAPI IcePatchFeature(int);

};