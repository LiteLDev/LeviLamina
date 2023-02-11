/**
 * @file  BribeableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BribeableComponent.
 *
 */
class BribeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLECOMPONENT
public:
    class BribeableComponent& operator=(class BribeableComponent const &) = delete;
    BribeableComponent(class BribeableComponent const &) = delete;
#endif

public:
    /**
     * @hash   906576003
     * @symbol  ??0BribeableComponent\@\@QEAA\@XZ
     */
    MCAPI BribeableComponent();
    /**
     * @hash   -257709640
     * @symbol  ?addAdditionalSaveData\@BribeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   87378801
     * @symbol  ?clientBribeCheck\@BribeableComponent\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool clientBribeCheck(class Actor &);
    /**
     * @hash   -1425743769
     * @symbol  ?getBribeCooldown\@BribeableComponent\@\@QEAAAEAHXZ
     */
    MCAPI int & getBribeCooldown();
    /**
     * @hash   -1573795451
     * @symbol  ?getBribeTimer\@BribeableComponent\@\@QEAAAEAHXZ
     */
    MCAPI int & getBribeTimer();
    /**
     * @hash   -872424533
     * @symbol  ?getInteraction\@BribeableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -2038941464
     * @symbol  ?readAdditionalSaveData\@BribeableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1312282358
     * @symbol  ?resetBribe\@BribeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void resetBribe(class Actor &);

//private:
    /**
     * @hash   1143302358
     * @symbol  ?_bribe\@BribeableComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void _bribe(class Actor &, class Player &);
    /**
     * @hash   1541129482
     * @symbol  ?_canBribe\@BribeableComponent\@\@AEAA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool _canBribe(class ItemStack const &);

private:

};