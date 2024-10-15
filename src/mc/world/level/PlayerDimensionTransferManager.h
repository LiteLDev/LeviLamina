#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class PlayerDimensionTransferManager {
public:
    // prevent constructor by default
    PlayerDimensionTransferManager& operator=(PlayerDimensionTransferManager const&);
    PlayerDimensionTransferManager(PlayerDimensionTransferManager const&);
    PlayerDimensionTransferManager();

public:
    // NOLINTBEGIN
    MCAPI PlayerDimensionTransferManager(
        std::unique_ptr<class PlayerLimboActorManager>                        playerLimboActorManager,
        std::unique_ptr<class IPlayerDimensionTransferer>                     playerDimensionTransferer,
        gsl::not_null<class StackRefResult<class DimensionManager>> const&    dimensionManager,
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const& gameplayUserManager,
        gsl::not_null<class StackRefResult<class EntityRegistry>> const&      entityRegistry,
        std::unique_ptr<class ILevelCrashDumpManager>                         levelCrashDumpManager
    );

    MCAPI class IPlayerDimensionTransferConnector& getPlayerDimensionTransferConnector();

    MCAPI void handleChangeDimensionRequests();

    MCAPI void loadAllOwnedLimboActors();

    MCAPI void requestPlayerChangeDimension(class Player const& player, class ChangeDimensionRequest&& changeRequest);

    MCAPI void setLevelFinishedInitializing();

    MCAPI void setPacketSender(class PacketSender& packetSender);

    MCAPI void transferActorToOwnedEntityLimbo(struct ActorUniqueID playerId, class Actor& actor);

    MCAPI ~PlayerDimensionTransferManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class StackRefResult<class DimensionManager> _getValidDimensionManager();

    MCAPI class StackRefResult<class EntityRegistry> _getValidEntityRegistry();

    MCAPI bool _isPlayerSuspended(class Player const& player) const;

    MCAPI void _onGameplayUserRemoved(class EntityContext& entity);

    MCAPI bool _playerChangeDimension(class Player& player, class ChangeDimensionRequest& changeRequest);

    MCAPI void _playerChangeDimensionPrepareRegion(
        class Player&                 player,
        class ChangeDimensionRequest& changeRequest,
        class Dimension&              toDimension
    );

    MCAPI bool _playerChangeDimensionWaitingForChunks(
        class Player&                 player,
        class ChangeDimensionRequest& changeRequest,
        class Dimension&              toDimension
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        std::unique_ptr<class PlayerLimboActorManager>                        playerLimboActorManager,
        std::unique_ptr<class IPlayerDimensionTransferer>                     playerDimensionTransferer,
        gsl::not_null<class StackRefResult<class DimensionManager>> const&    dimensionManager,
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const& gameplayUserManager,
        gsl::not_null<class StackRefResult<class EntityRegistry>> const&      entityRegistry,
        std::unique_ptr<class ILevelCrashDumpManager>                         levelCrashDumpManager
    );

    MCAPI void dtor$();

    // NOLINTEND
};
