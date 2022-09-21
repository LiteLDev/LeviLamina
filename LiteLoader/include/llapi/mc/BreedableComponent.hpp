/**
 * @file  MC/BreedableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1928274699
     * @symbol ??0BreedableComponent@@QEAA@XZ
     */
    MCAPI BreedableComponent();
    /**
     * @hash   15127944
     * @symbol ?addAdditionalSaveData@BreedableComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   486008817
     * @symbol ?canMate@BreedableComponent@@QEBA_NAEBVActor@@0@Z
     */
    MCAPI bool canMate(class Actor const &, class Actor const &) const;
    /**
     * @hash   1422073941
     * @symbol ?decrementBreedCooldown@BreedableComponent@@QEAAXXZ
     */
    MCAPI void decrementBreedCooldown();
    /**
     * @hash   -560586907
     * @symbol ?decrementLoveTimer@BreedableComponent@@QEAAXXZ
     */
    MCAPI void decrementLoveTimer();
    /**
     * @hash   -472486280
     * @symbol ?getBreedCooldown@BreedableComponent@@QEBAHXZ
     */
    MCAPI int getBreedCooldown() const;
    /**
     * @hash   -1822518181
     * @symbol ?getInteraction@BreedableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   14205424
     * @symbol ?getLoveCause@BreedableComponent@@QEBAPEAVPlayer@@AEBVActor@@@Z
     */
    MCAPI class Player * getLoveCause(class Actor const &) const;
    /**
     * @hash   1326842376
     * @symbol ?getLoveTimer@BreedableComponent@@QEBAHXZ
     */
    MCAPI int getLoveTimer() const;
    /**
     * @hash   -337134423
     * @symbol ?mate@BreedableComponent@@QEAAXAEAVActor@@0@Z
     */
    MCAPI void mate(class Actor &, class Actor &);
    /**
     * @hash   -770618567
     * @symbol ?meetsSittingRequirements@BreedableComponent@@QEBA_NAEBVActor@@@Z
     */
    MCAPI bool meetsSittingRequirements(class Actor const &) const;
    /**
     * @hash   1335964568
     * @symbol ?readAdditionalSaveData@BreedableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1449030132
     * @symbol ?resetLove@BreedableComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void resetLove(class Actor &);
    /**
     * @hash   -1314705322
     * @symbol ?setLoveTimer@BreedableComponent@@QEAAXH@Z
     */
    MCAPI void setLoveTimer(int);

//private:
    /**
     * @hash   297960470
     * @symbol ?_canBreed@BreedableComponent@@AEAA_NAEAVActor@@AEAVPlayer@@AEBVItemStack@@@Z
     */
    MCAPI bool _canBreed(class Actor &, class Player &, class ItemStack const &);
    /**
     * @hash   1283972537
     * @symbol ?_handleMate@BreedableComponent@@AEAAXAEAVActor@@0@Z
     */
    MCAPI void _handleMate(class Actor &, class Actor &);
    /**
     * @hash   -1391972285
     * @symbol ?_handlePregnancy@BreedableComponent@@AEAAXAEAVActor@@0@Z
     */
    MCAPI void _handlePregnancy(class Actor &, class Actor &);
    /**
     * @hash   15101305
     * @symbol ?_meetsEnvironmentRequirements@BreedableComponent@@AEBA_NAEAVActor@@@Z
     */
    MCAPI bool _meetsEnvironmentRequirements(class Actor &) const;
    /**
     * @hash   -1656000172
     * @symbol ?_useBreedItem@BreedableComponent@@AEAAXAEAVActor@@AEAVPlayer@@AEBVItemStack@@@Z
     */
    MCAPI void _useBreedItem(class Actor &, class Player &, class ItemStack const &);

private:

};