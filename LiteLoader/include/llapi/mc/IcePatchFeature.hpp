/**
 * @file  MC/IcePatchFeature.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~IcePatchFeature();
    /**
     * @hash   841716003
     * @vftbl  3
     * @symbol ?place@IcePatchFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   1251372150
     * @symbol ??0IcePatchFeature@@QEAA@H@Z
     */
    MCAPI IcePatchFeature(int);

};