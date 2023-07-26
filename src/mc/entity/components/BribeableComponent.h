#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BribeableComponent {

public:
    // prevent constructor by default
    BribeableComponent& operator=(BribeableComponent const&) = delete;
    BribeableComponent(BribeableComponent const&)            = delete;

public:
    /**
     * @symbol ??0BribeableComponent\@\@QEAA\@XZ
     */
    MCAPI BribeableComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@BribeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?clientBribeCheck\@BribeableComponent\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool clientBribeCheck(class Actor&); // NOLINT
    /**
     * @symbol ?getBribeCooldown\@BribeableComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getBribeCooldown(); // NOLINT
    /**
     * @symbol ?getBribeTimer\@BribeableComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getBribeTimer(); // NOLINT
    /**
     * @symbol ?getInteraction\@BribeableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@BribeableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?resetBribe\@BribeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void resetBribe(class Actor&); // NOLINT

    // private:
    /**
     * @symbol ?_bribe\@BribeableComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void _bribe(class Actor&, class Player&); // NOLINT
    /**
     * @symbol ?_canBribe\@BribeableComponent\@\@AEAA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool _canBribe(class ItemStack const&); // NOLINT

private:
};
