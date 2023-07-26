#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AreaAttackComponent {

public:
    // prevent constructor by default
    AreaAttackComponent& operator=(AreaAttackComponent const&) = delete;
    AreaAttackComponent(AreaAttackComponent const&)            = delete;
    AreaAttackComponent()                                      = delete;

public:
    /**
     * @symbol ??0AreaAttackComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AreaAttackComponent(class AreaAttackComponent&&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@AreaAttackComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?findCooldownEntry\@AreaAttackComponent\@\@QEAAPEAU?$pair\@UActorUniqueID\@\@UTick\@\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI struct std::pair<struct ActorUniqueID, struct Tick>* findCooldownEntry(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol
     * ?isEntryOnAttackCooldown\@AreaAttackComponent\@\@QEBA_NPEBU?$pair\@UActorUniqueID\@\@UTick\@\@\@std\@\@AEBUTick\@\@\@Z
     */
    MCAPI bool isEntryOnAttackCooldown(struct std::pair<struct ActorUniqueID, struct Tick> const*, struct Tick const&)
        const; // NOLINT
    /**
     * @symbol ??4AreaAttackComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class AreaAttackComponent& operator=(class AreaAttackComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@AreaAttackComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ??1AreaAttackComponent\@\@QEAA\@XZ
     */
    MCAPI ~AreaAttackComponent(); // NOLINT
};
