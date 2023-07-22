/**
 * @file  FreezingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?addAdditionalSaveData\@FreezingComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?decreaseFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void decreaseFreezingEffect();
    /**
     * @symbol  ?getFreezingEffectStrength\@FreezingComponent\@\@QEBAMXZ
     */
    MCAPI float getFreezingEffectStrength() const;
    /**
     * @symbol  ?increaseFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void increaseFreezingEffect();
    /**
     * @symbol  ?isFullyFrozen\@FreezingComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFullyFrozen() const;
    /**
     * @symbol  ?isFullyUnfrozen\@FreezingComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFullyUnfrozen() const;
    /**
     * @symbol  ??8FreezingComponent\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class FreezingComponent const &) const;
    /**
     * @symbol  ?readAdditionalSaveData\@FreezingComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?resetFreezingEffect\@FreezingComponent\@\@QEAAXXZ
     */
    MCAPI void resetFreezingEffect();

};