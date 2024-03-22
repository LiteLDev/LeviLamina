#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MountTamingComponent {
public:
    // prevent constructor by default
    MountTamingComponent& operator=(MountTamingComponent const&);
    MountTamingComponent(MountTamingComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MountTamingComponent@@QEAA@XZ
    MCAPI MountTamingComponent();

    // symbol: ?addAdditionalSaveData@MountTamingComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?becomeTame@MountTamingComponent@@QEAAXAEAVActor@@_N@Z
    MCAPI void becomeTame(class Actor& owner, bool tamingParticles);

    // symbol: ?getCounter@MountTamingComponent@@QEAAAEAHXZ
    MCAPI int& getCounter();

    // symbol: ?getInteraction@MountTamingComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol: ?getTemper@MountTamingComponent@@QEAAAEAHXZ
    MCAPI int& getTemper();

    // symbol: ?getTemperMod@MountTamingComponent@@QEBAHXZ
    MCAPI int getTemperMod() const;

    // symbol: ?getWaitCount@MountTamingComponent@@QEBAHXZ
    MCAPI int getWaitCount() const;

    // symbol: ?readAdditionalSaveData@MountTamingComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?tameToPlayer@MountTamingComponent@@QEAAXAEAVActor@@AEAVPlayer@@_N@Z
    MCAPI void tameToPlayer(class Actor& owner, class Player& player, bool tamingParticles);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_feedItem@MountTamingComponent@@AEAAXAEAVActor@@AEAVPlayer@@H@Z
    MCAPI void _feedItem(class Actor& owner, class Player& player, int);

    // symbol: ?_autoReject@MountTamingComponent@@CA_NAEBVItemStack@@PEBVMountTameableDefinition@@@Z
    MCAPI static bool _autoReject(class ItemStack const& item, class MountTameableDefinition const*);

    // symbol: ?_canTame@MountTamingComponent@@CA_NAEAVActor@@AEAVPlayer@@AEBVItemStack@@PEBVMountTameableDefinition@@@Z
    MCAPI static bool
    _canTame(class Actor& owner, class Player&, class ItemStack const& item, class MountTameableDefinition const*);

    // NOLINTEND
};
