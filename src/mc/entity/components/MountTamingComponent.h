#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MountTamingComponent {

public:
    // prevent constructor by default
    MountTamingComponent& operator=(MountTamingComponent const&) = delete;
    MountTamingComponent(MountTamingComponent const&)            = delete;

public:
    /**
     * @symbol ??0MountTamingComponent\@\@QEAA\@XZ
     */
    MCAPI MountTamingComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@MountTamingComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?becomeTame\@MountTamingComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void becomeTame(class Actor&, bool); // NOLINT
    /**
     * @symbol ?getCounter\@MountTamingComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getCounter(); // NOLINT
    /**
     * @symbol ?getInteraction\@MountTamingComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT
    /**
     * @symbol ?getTemper\@MountTamingComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getTemper(); // NOLINT
    /**
     * @symbol ?getTemperMod\@MountTamingComponent\@\@QEBAHXZ
     */
    MCAPI int getTemperMod() const; // NOLINT
    /**
     * @symbol ?getWaitCount\@MountTamingComponent\@\@QEBAHXZ
     */
    MCAPI int getWaitCount() const; // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@MountTamingComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?tameToPlayer\@MountTamingComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@_N\@Z
     */
    MCAPI void tameToPlayer(class Actor&, class Player&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_feedItem\@MountTamingComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@H\@Z
     */
    MCAPI void _feedItem(class Actor&, class Player&, int); // NOLINT
    /**
     * @symbol ?_autoReject\@MountTamingComponent\@\@CA_NAEBVItemStack\@\@PEBVMountTameableDefinition\@\@\@Z
     */
    MCAPI static bool _autoReject(class ItemStack const&, class MountTameableDefinition const*); // NOLINT

private:
};
