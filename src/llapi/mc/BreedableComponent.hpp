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
     * @symbol  ??0BreedableComponent\@\@QEAA\@XZ
     */
    MCAPI BreedableComponent();
    /**
     * @symbol  ?addAdditionalSaveData\@BreedableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?canMate\@BreedableComponent\@\@QEBA_NAEBVActor\@\@0\@Z
     */
    MCAPI bool canMate(class Actor const &, class Actor const &) const;
    /**
     * @symbol  ?decrementBreedCooldown\@BreedableComponent\@\@QEAAXXZ
     */
    MCAPI void decrementBreedCooldown();
    /**
     * @symbol  ?decrementLoveTimer\@BreedableComponent\@\@QEAAXXZ
     */
    MCAPI void decrementLoveTimer();
    /**
     * @symbol  ?getBreedCooldown\@BreedableComponent\@\@QEBAHXZ
     */
    MCAPI int getBreedCooldown() const;
    /**
     * @symbol  ?getInteraction\@BreedableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol  ?getLoveCause\@BreedableComponent\@\@QEBAPEAVPlayer\@\@AEBVActor\@\@\@Z
     */
    MCAPI class Player * getLoveCause(class Actor const &) const;
    /**
     * @symbol  ?getLoveTimer\@BreedableComponent\@\@QEBAHXZ
     */
    MCAPI int getLoveTimer() const;
    /**
     * @symbol  ?mate\@BreedableComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void mate(class Actor &, class Actor &);
    /**
     * @symbol  ?meetsSittingRequirements\@BreedableComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool meetsSittingRequirements(class Actor const &) const;
    /**
     * @symbol  ?readAdditionalSaveData\@BreedableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?resetLove\@BreedableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void resetLove(class Actor &);
    /**
     * @symbol  ?setInLove\@BreedableComponent\@\@QEAAXAEAVActor\@\@PEBVPlayer\@\@\@Z
     */
    MCAPI void setInLove(class Actor &, class Player const *);
    /**
     * @symbol  ?setLoveTimer\@BreedableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setLoveTimer(int);

//private:
    /**
     * @symbol  ?_canBreed\@BreedableComponent\@\@AEAA_NAEAVActor\@\@AEAVPlayer\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI bool _canBreed(class Actor &, class Player &, class ItemStack const &);
    /**
     * @symbol  ?_handleMate\@BreedableComponent\@\@AEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void _handleMate(class Actor &, class Actor &);
    /**
     * @symbol  ?_handlePregnancy\@BreedableComponent\@\@AEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void _handlePregnancy(class Actor &, class Actor &);
    /**
     * @symbol  ?_meetsEnvironmentRequirements\@BreedableComponent\@\@AEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _meetsEnvironmentRequirements(class Actor &) const;
    /**
     * @symbol  ?_useBreedItem\@BreedableComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void _useBreedItem(class Actor &, class Player &, class ItemStack const &);

private:

};