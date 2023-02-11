/**
 * @file  MeadowFlowerFeature.hpp
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
 * @brief MC class MeadowFlowerFeature.
 *
 */
class MeadowFlowerFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEADOWFLOWERFEATURE
public:
    class MeadowFlowerFeature& operator=(class MeadowFlowerFeature const &) = delete;
    MeadowFlowerFeature(class MeadowFlowerFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MeadowFlowerFeature();
    /**
     * @hash   2078975490
     * @vftbl  3
     * @symbol  ?place\@MeadowFlowerFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   1645414388
     * @symbol  ??0MeadowFlowerFeature\@\@QEAA\@XZ
     */
    MCAPI MeadowFlowerFeature();

//private:
    /**
     * @hash   -950772612
     * @symbol  ?getRandomArrayIndex\@MeadowFlowerFeature\@\@AEBAHAEBVBlockPos\@\@_KM\@Z
     */
    MCAPI int getRandomArrayIndex(class BlockPos const &, unsigned __int64, float) const;

private:

};