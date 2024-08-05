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
    MCAPI PlayerDimensionTransferManager(std::unique_ptr<class PlayerLimboActorManager>, std::unique_ptr<class IPlayerDimensionTransferer>, gsl::not_null<class StackRefResult<class DimensionManager>> const&, gsl::not_null<class StackRefResult<class GameplayUserManager>> const&, gsl::not_null<class StackRefResult<class EntityRegistry>> const&, std::unique_ptr<class ILevelCrashDumpManager>);

    MCAPI class IPlayerDimensionTransferConnector& getPlayerDimensionTransferConnector();

    MCAPI void handleChangeDimensionRequests();

    MCAPI void loadAllOwnedLimboActors();

    MCAPI void requestPlayerChangeDimension(class Player const&, class ChangeDimensionRequest&&);

    MCAPI void setLevelFinishedInitializing();

    MCAPI void setPacketSender(class PacketSender&);

    MCAPI void transferActorToOwnedEntityLimbo(struct ActorUniqueID, class Actor&);

    MCAPI ~PlayerDimensionTransferManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class StackRefResult<class DimensionManager> _getValidDimensionManager();

    MCAPI class StackRefResult<class EntityRegistry> _getValidEntityRegistry();

    MCAPI bool _isPlayerSuspended(class Player const&) const;

    MCAPI void _onGameplayUserRemoved(class EntityContext&);

    MCAPI bool _playerChangeDimension(class Player&, class ChangeDimensionRequest&);

    MCAPI void _playerChangeDimensionPrepareRegion(class Player&, class ChangeDimensionRequest&, class Dimension&);

    MCAPI bool _playerChangeDimensionWaitingForChunks(class Player&, class ChangeDimensionRequest&, class Dimension&);

    // NOLINTEND
};
