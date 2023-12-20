#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"

class PlayerLimboActorManager {
public:
    // prevent constructor by default
    PlayerLimboActorManager& operator=(PlayerLimboActorManager const&);
    PlayerLimboActorManager(PlayerLimboActorManager const&);
    PlayerLimboActorManager();

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerLimboActorManager@@QEAA@AEBV?$StackRefResultT@U?$SharePtrRefTraits@VLevelStorage@@@@@@@Z
    MCAPI explicit PlayerLimboActorManager(class StackRefResultT<struct SharePtrRefTraits<class LevelStorage>> const&);

    // symbol:
    // ?addOwnedLimboActor@PlayerLimboActorManager@@QEAAXUActorUniqueID@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
    MCAPI void addOwnedLimboActor(struct ActorUniqueID, std::unique_ptr<class CompoundTag>);

    // symbol:
    // ?getOwnedActorsDimensionTransferLimbo@PlayerLimboActorManager@@QEAAAEAV?$unordered_map@UActorUniqueID@@V?$vector@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V?$allocator@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@2@@std@@U?$hash@UActorUniqueID@@@3@U?$equal_to@UActorUniqueID@@@3@V?$allocator@U?$pair@$$CBUActorUniqueID@@V?$vector@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V?$allocator@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@2@@std@@@std@@@3@@std@@XZ
    MCAPI std::unordered_map<struct ActorUniqueID, std::vector<std::unique_ptr<class CompoundTag>>>&
          getOwnedActorsDimensionTransferLimbo();

    // symbol: ?loadAllOwnedLimboActors@PlayerLimboActorManager@@QEAAXXZ
    MCAPI void loadAllOwnedLimboActors();

    // symbol: ?saveOwnedLimboActorsForPlayer@PlayerLimboActorManager@@QEBAXUActorUniqueID@@@Z
    MCAPI void saveOwnedLimboActorsForPlayer(struct ActorUniqueID) const;

    // symbol: ??1PlayerLimboActorManager@@QEAA@XZ
    MCAPI ~PlayerLimboActorManager();

    // symbol:
    // ?getOwnedEntityLimboStorageKeyForPlayer@PlayerLimboActorManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z
    MCAPI static std::string getOwnedEntityLimboStorageKeyForPlayer(struct ActorUniqueID);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getValidLevelStorage@PlayerLimboActorManager@@AEBA?AV?$StackRefResultT@U?$SharePtrRefTraits@VLevelStorage@@@@@@XZ
    MCAPI class StackRefResultT<struct SharePtrRefTraits<class LevelStorage>> _getValidLevelStorage() const;

    // NOLINTEND
};
