#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class PlayerDimensionTransferManager {
public:
    // prevent constructor by default
    PlayerDimensionTransferManager& operator=(PlayerDimensionTransferManager const&);
    PlayerDimensionTransferManager(PlayerDimensionTransferManager const&);
    PlayerDimensionTransferManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0PlayerDimensionTransferManager@@QEAA@V?$unique_ptr@VPlayerLimboActorManager@@U?$default_delete@VPlayerLimboActorManager@@@std@@@std@@V?$unique_ptr@VIPlayerDimensionTransferer@@U?$default_delete@VIPlayerDimensionTransferer@@@std@@@2@AEBV?$not_null@V?$StackRefResult@VDimensionManager@@@@@gsl@@AEBV?$not_null@V?$StackRefResult@VGameplayUserManager@@@@@5@AEBV?$not_null@V?$StackRefResult@VEntityRegistry@@@@@5@V?$unique_ptr@VILevelCrashDumpManager@@U?$default_delete@VILevelCrashDumpManager@@@std@@@2@@Z
    MCAPI PlayerDimensionTransferManager(std::unique_ptr<class PlayerLimboActorManager>, std::unique_ptr<class IPlayerDimensionTransferer>, gsl::not_null<class StackRefResult<class DimensionManager>> const&, gsl::not_null<class StackRefResult<class GameplayUserManager>> const&, gsl::not_null<class StackRefResult<class EntityRegistry>> const&, std::unique_ptr<class ILevelCrashDumpManager>);

    // symbol:
    // ?getPlayerDimensionTransferConnector@PlayerDimensionTransferManager@@QEAAAEAVIPlayerDimensionTransferConnector@@XZ
    MCAPI class IPlayerDimensionTransferConnector& getPlayerDimensionTransferConnector();

    // symbol: ?handleChangeDimensionRequests@PlayerDimensionTransferManager@@QEAAXXZ
    MCAPI void handleChangeDimensionRequests();

    // symbol: ?loadAllOwnedLimboActors@PlayerDimensionTransferManager@@QEAAXXZ
    MCAPI void loadAllOwnedLimboActors();

    // symbol:
    // ?requestPlayerChangeDimension@PlayerDimensionTransferManager@@QEAAXAEBVPlayer@@$$QEAVChangeDimensionRequest@@@Z
    MCAPI void requestPlayerChangeDimension(class Player const&, class ChangeDimensionRequest&&);

    // symbol: ?setLevelFinishedInitializing@PlayerDimensionTransferManager@@QEAAXXZ
    MCAPI void setLevelFinishedInitializing();

    // symbol: ?setPacketSender@PlayerDimensionTransferManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender&);

    // symbol: ?transferActorToOwnedEntityLimbo@PlayerDimensionTransferManager@@QEAAXUActorUniqueID@@AEAVActor@@@Z
    MCAPI void transferActorToOwnedEntityLimbo(struct ActorUniqueID, class Actor&);

    // symbol: ??1PlayerDimensionTransferManager@@QEAA@XZ
    MCAPI ~PlayerDimensionTransferManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getValidDimensionManager@PlayerDimensionTransferManager@@AEAA?AV?$StackRefResult@VDimensionManager@@@@XZ
    MCAPI class StackRefResult<class DimensionManager> _getValidDimensionManager();

    // symbol: ?_getValidEntityRegistry@PlayerDimensionTransferManager@@AEAA?AV?$StackRefResult@VEntityRegistry@@@@XZ
    MCAPI class StackRefResult<class EntityRegistry> _getValidEntityRegistry();

    // symbol: ?_isPlayerSuspended@PlayerDimensionTransferManager@@AEBA_NAEBVPlayer@@@Z
    MCAPI bool _isPlayerSuspended(class Player const&) const;

    // symbol: ?_playerChangeDimension@PlayerDimensionTransferManager@@AEAA_NAEAVPlayer@@AEAVChangeDimensionRequest@@@Z
    MCAPI bool _playerChangeDimension(class Player&, class ChangeDimensionRequest&);

    // symbol:
    // ?_playerChangeDimensionPrepareRegion@PlayerDimensionTransferManager@@AEAAXAEAVPlayer@@AEAVChangeDimensionRequest@@AEAVDimension@@@Z
    MCAPI void _playerChangeDimensionPrepareRegion(class Player&, class ChangeDimensionRequest&, class Dimension&);

    // symbol:
    // ?_playerChangeDimensionWaitingForChunks@PlayerDimensionTransferManager@@AEAA_NAEAVPlayer@@AEAVChangeDimensionRequest@@AEAVDimension@@@Z
    MCAPI bool _playerChangeDimensionWaitingForChunks(class Player&, class ChangeDimensionRequest&, class Dimension&);

    // NOLINTEND
};
