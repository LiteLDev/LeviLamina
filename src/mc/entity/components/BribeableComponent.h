#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BribeableComponent {
public:
    // prevent constructor by default
    BribeableComponent& operator=(BribeableComponent const&);
    BribeableComponent(BribeableComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BribeableComponent@@QEAA@XZ
    MCAPI BribeableComponent();

    // symbol: ?addAdditionalSaveData@BribeableComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?clientBribeCheck@BribeableComponent@@QEAA_NAEAVActor@@@Z
    MCAPI bool clientBribeCheck(class Actor& owner);

    // symbol: ?getBribeCooldown@BribeableComponent@@QEAAAEAHXZ
    MCAPI int& getBribeCooldown();

    // symbol: ?getBribeTimer@BribeableComponent@@QEAAAEAHXZ
    MCAPI int& getBribeTimer();

    // symbol: ?getInteraction@BribeableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol: ?readAdditionalSaveData@BribeableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?resetBribe@BribeableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void resetBribe(class Actor& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_bribe@BribeableComponent@@AEAAXAEAVActor@@AEAVPlayer@@@Z
    MCAPI void _bribe(class Actor& owner, class Player& player);

    // symbol: ?_canBribe@BribeableComponent@@AEAA_NAEBVItemStack@@@Z
    MCAPI bool _canBribe(class ItemStack const& item);

    // NOLINTEND
};
