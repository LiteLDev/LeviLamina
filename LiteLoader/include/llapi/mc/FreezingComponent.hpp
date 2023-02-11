/**
 * @file  FreezingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FreezingComponent.
 *
 */
class FreezingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZINGCOMPONENT
public:
    class FreezingComponent& operator=(class FreezingComponent const &) = delete;
    FreezingComponent(class FreezingComponent const &) = delete;
    FreezingComponent() = delete;
#endif

public:
    /**
     * @hash   248762216
     * @symbol  ?addAdditionalSaveData\@FreezingComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1712659383
     * @symbol  ?decreaseFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void decreaseFreezingEffect();
    /**
     * @hash   -690466834
     * @symbol  ?getFreezingEffectStrength\@FreezingComponent\@\@QEBAMXZ
     */
    MCAPI float getFreezingEffectStrength() const;
    /**
     * @hash   -50112079
     * @symbol  ?increaseFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void increaseFreezingEffect();
    /**
     * @hash   -932764132
     * @symbol  ?isFullyFrozen\@FreezingComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFullyFrozen() const;
    /**
     * @hash   -1330544484
     * @symbol  ?isFullyUnfrozen\@FreezingComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFullyUnfrozen() const;
    /**
     * @hash   -861428466
     * @symbol  ??8FreezingComponent\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class FreezingComponent const &) const;
    /**
     * @hash   -39256030
     * @symbol  ?readAdditionalSaveData\@FreezingComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   942762701
     * @symbol  ?resetFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void resetFreezingEffect();

};