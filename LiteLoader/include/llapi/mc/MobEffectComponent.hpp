/**
 * @file  MobEffectComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEffectComponent.
 *
 */
class MobEffectComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTCOMPONENT
public:
    class MobEffectComponent& operator=(class MobEffectComponent const &) = delete;
    MobEffectComponent(class MobEffectComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1343249784
     * @symbol  ??0MobEffectComponent\@\@QEAA\@XZ
     */
    MCAPI MobEffectComponent();
    /**
     * @hash   2028591761
     * @symbol  ??0MobEffectComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobEffectComponent(class MobEffectComponent &&);
    /**
     * @hash   989876137
     * @symbol  ?addAdditionalSaveData\@MobEffectComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    /**
     * @hash   -699057148
     * @symbol  ??4MobEffectComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MobEffectComponent & operator=(class MobEffectComponent &&);
    /**
     * @hash   1989698546
     * @symbol  ?readAdditionalSaveData\@MobEffectComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1754781418
     * @symbol  ?tick\@MobEffectComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor &);
    /**
     * @hash   1311824598
     * @symbol  ??1MobEffectComponent\@\@QEAA\@XZ
     */
    MCAPI ~MobEffectComponent();

};