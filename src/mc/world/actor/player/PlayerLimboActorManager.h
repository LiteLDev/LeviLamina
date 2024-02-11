#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class PlayerLimboActorManager {
public:
    // prevent constructor by default
    PlayerLimboActorManager& operator=(PlayerLimboActorManager const&);
    PlayerLimboActorManager(PlayerLimboActorManager const&);
    PlayerLimboActorManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0PlayerLimboActorManager@@QEAA@AEBV?$StackRefResult@VLevelStorage@@@@AEBV?$StackRefResult@VActorManager@@@@AEBV?$StackRefResult@VActorFactory@@@@@Z
    MCAPI
    PlayerLimboActorManager(class StackRefResult<class LevelStorage> const&, class StackRefResult<class ActorManager> const&, class StackRefResult<class ActorFactory> const&);

    // symbol: ?clearOwnedEntityLimboForPlayer@PlayerLimboActorManager@@QEAAXUActorUniqueID@@@Z
    MCAPI void clearOwnedEntityLimboForPlayer(struct ActorUniqueID);

    // symbol: ?loadAllOwnedLimboActors@PlayerLimboActorManager@@QEAAXXZ
    MCAPI void loadAllOwnedLimboActors();

    // symbol:
    // ?processOwnedAgentForPlayer@PlayerLimboActorManager@@QEAAPEAVActor@@AEAVCompoundTag@@AEAVIAddActorEntityProxy@@AEBVDimensionHeightRange@@AEBVVec3@@@Z
    MCAPI class Actor*
    processOwnedAgentForPlayer(class CompoundTag&, class IAddActorEntityProxy&, class DimensionHeightRange const&, class Vec3 const&);

    // symbol:
    // ?processOwnedEntityLimboForPlayer@PlayerLimboActorManager@@QEAAXUActorUniqueID@@AEAVIAddActorEntityProxy@@AEBVDimensionHeightRange@@AEBVVec3@@@Z
    MCAPI void
    processOwnedEntityLimboForPlayer(struct ActorUniqueID, class IAddActorEntityProxy&, class DimensionHeightRange const&, class Vec3 const&);

    // symbol: ?saveOwnedLimboActorsForPlayer@PlayerLimboActorManager@@QEBAXUActorUniqueID@@@Z
    MCAPI void saveOwnedLimboActorsForPlayer(struct ActorUniqueID) const;

    // symbol:
    // ?transferAgentToOwnedEntityLimbo@PlayerLimboActorManager@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVActor@@@Z
    MCAPI std::unique_ptr<class CompoundTag> transferAgentToOwnedEntityLimbo(class Actor&);

    // symbol: ??1PlayerLimboActorManager@@QEAA@XZ
    MCAPI ~PlayerLimboActorManager();

    // symbol:
    // ?getOwnedEntityLimboStorageKeyForPlayer@PlayerLimboActorManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z
    MCAPI static std::string getOwnedEntityLimboStorageKeyForPlayer(struct ActorUniqueID);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getValidActorFactory@PlayerLimboActorManager@@AEBA?AV?$StackRefResult@VActorFactory@@@@XZ
    MCAPI class StackRefResult<class ActorFactory> _getValidActorFactory() const;

    // symbol: ?_getValidActorManager@PlayerLimboActorManager@@AEBA?AV?$StackRefResult@VActorManager@@@@XZ
    MCAPI class StackRefResult<class ActorManager> _getValidActorManager() const;

    // symbol: ?_getValidLevelStorage@PlayerLimboActorManager@@AEBA?AV?$StackRefResult@VLevelStorage@@@@XZ
    MCAPI class StackRefResult<class LevelStorage> _getValidLevelStorage() const;

    // NOLINTEND
};
