/**
 * @file  BreedableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreedableComponent.
 *
 */
class BreedableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDABLECOMPONENT
public:
    class BreedableComponent& operator=(class BreedableComponent const &) = delete;
    BreedableComponent(class BreedableComponent const &) = delete;
#endif

public:
    /**
     * @hash   2055265083
     * @symbol  ??0BreedableComponent\@\@QEAA\@XZ
     */
    MCAPI BreedableComponent();
    /**
     * @hash   142364344
     * @symbol  ?addAdditionalSaveData\@BreedableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   613368225
     * @symbol  ?canMate\@BreedableComponent\@\@QEBA_NAEBVActor\@\@0\@Z
     */
    MCAPI bool canMate(class Actor const &, class Actor const &) const;
    /**
     * @hash   1549448725
     * @symbol  ?decrementBreedCooldown\@BreedableComponent\@\@QEAAXXZ
     */
    MCAPI void decrementBreedCooldown();
    /**
     * @hash   -433212123
     * @symbol  ?decrementLoveTimer\@BreedableComponent\@\@QEAAXXZ
     */
    MCAPI void decrementLoveTimer();
    /**
     * @hash   -221473080
     * @symbol  ?getBreedCooldown\@BreedableComponent\@\@QEBAHXZ
     */
    MCAPI int getBreedCooldown() const;
    /**
     * @hash   -1695143397
     * @symbol  ?getInteraction\@BreedableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   141641712
     * @symbol  ?getLoveCause\@BreedableComponent\@\@QEBAPEAVPlayer\@\@AEBVActor\@\@\@Z
     */
    MCAPI class Player * getLoveCause(class Actor const &) const;
    /**
     * @hash   1454278664
     * @symbol  ?getLoveTimer\@BreedableComponent\@\@QEBAHXZ
     */
    MCAPI int getLoveTimer() const;
    /**
     * @hash   -210528439
     * @symbol  ?mate\@BreedableComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void mate(class Actor &, class Actor &);
    /**
     * @hash   -644012583
     * @symbol  ?meetsSittingRequirements\@BreedableComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool meetsSittingRequirements(class Actor const &) const;
    /**
     * @hash   1463508488
     * @symbol  ?readAdditionalSaveData\@BreedableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1321486212
     * @symbol  ?resetLove\@BreedableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void resetLove(class Actor &);
    /**
     * @symbol  ?setInLove\@BreedableComponent\@\@QEAAXAEAVActor\@\@PEBVPlayer\@\@\@Z
     */
    MCAPI void setInLove(class Actor &, class Player const *);
    /**
     * @hash   -1187146026
     * @symbol  ?setLoveTimer\@BreedableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setLoveTimer(int);

//private:
    /**
     * @hash   424981606
     * @symbol  ?_canBreed\@BreedableComponent\@\@AEAA_NAEAVActor\@\@AEAVPlayer\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI bool _canBreed(class Actor &, class Player &, class ItemStack const &);
    /**
     * @hash   1410993673
     * @symbol  ?_handleMate\@BreedableComponent\@\@AEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void _handleMate(class Actor &, class Actor &);
    /**
     * @hash   -1264766637
     * @symbol  ?_handlePregnancy\@BreedableComponent\@\@AEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void _handlePregnancy(class Actor &, class Actor &);
    /**
     * @hash   142368457
     * @symbol  ?_meetsEnvironmentRequirements\@BreedableComponent\@\@AEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _meetsEnvironmentRequirements(class Actor &) const;
    /**
     * @hash   -1528733020
     * @symbol  ?_useBreedItem\@BreedableComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void _useBreedItem(class Actor &, class Player &, class ItemStack const &);

private:

};