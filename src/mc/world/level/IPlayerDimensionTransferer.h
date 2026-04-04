#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/IPlayerDimensionTransferConnector.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
class Dimension;
class EntityRegistry;
class GameplayUserManager;
class PacketSender;
class Player;
class PlayerLimboActorManager;
struct AddLimboActorHelper;
// clang-format on

class IPlayerDimensionTransferer : public ::IPlayerDimensionTransferConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerDimensionTransferer() = default;

    virtual void playerSaveLimboActors(
        ::Player&                  player,
        ::ChangeDimensionRequest&  changeRequest,
        ::Dimension&               toDimension,
        ::PlayerLimboActorManager* playerLimboActorManager
    ) = 0;

    virtual void playerDestroyRemotePlayers(::GameplayUserManager& gameplayUserManager) = 0;

    virtual void playerStartChangeDimensionSuspendRegion(::Player& player, ::DimensionType fromDimension) = 0;

    virtual void
    setTransitionLocation(::Player& player, ::ChangeDimensionRequest& changeRequest, ::Dimension& toDimension) = 0;

    virtual void
    syncTransitionComponentTargetPosition(::Player& player, ::ChangeDimensionRequest const& changeRequest) = 0;

    virtual void playerDestroyRegion(::Player& player, ::ChangeDimensionRequest const& changeRequest) = 0;

    virtual void playerPrepareRegion(
        ::Player&                       player,
        ::ChangeDimensionRequest const& changeRequest,
        ::Dimension const&              toDimension
    ) = 0;

    virtual bool playerWaitForServer(::Player& player, ::std::chrono::steady_clock::time_point currentTime) = 0;

    virtual bool playerWaitForDimensionTransitionSystem(::Player const& player, ::EntityRegistry& entityRegistry) = 0;

    virtual void
    sendClientRespawnMovePacketFromServer(::Player const& player, ::ChangeDimensionRequest& changeRequest) = 0;

    virtual bool waitForSubChunks(::Player& player, ::Dimension const& toDimension) = 0;

    virtual void startWaitForRespawn(::Player const& player) = 0;

    virtual void playerSwitchDimension(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) = 0;

    virtual bool doRespawnIfReady(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) = 0;

    virtual void setPacketSender(::PacketSender& packetSender) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
