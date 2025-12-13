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

    virtual void
    playerSaveLimboActors(::Player&, ::ChangeDimensionRequest&, ::Dimension&, ::PlayerLimboActorManager*) = 0;

    virtual void playerDestroyRemotePlayers(::GameplayUserManager&) = 0;

    virtual void playerStartChangeDimensionSuspendRegion(::Player&, ::DimensionType) = 0;

    virtual void setTransitionLocation(::Player&, ::ChangeDimensionRequest&, ::Dimension&) = 0;

    virtual void syncTransitionComponentTargetPosition(::Player&, ::ChangeDimensionRequest const&) = 0;

    virtual void playerDestroyRegion(::Player&, ::ChangeDimensionRequest const&) = 0;

    virtual void playerPrepareRegion(::Player&, ::ChangeDimensionRequest const&, ::Dimension const&) = 0;

    virtual bool playerWaitForServer(::Player&, ::std::chrono::steady_clock::time_point) = 0;

    virtual bool playerWaitForDimensionTransitionSystem(::Player const&, ::EntityRegistry&) = 0;

    virtual void sendClientRespawnMovePacketFromServer(::Player const&, ::ChangeDimensionRequest&) = 0;

    virtual bool waitForSubChunks(::Player&, ::Dimension const&) = 0;

    virtual void startWaitForRespawn(::Player const&) = 0;

    virtual void playerSwitchDimension(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*) = 0;

    virtual bool doRespawnIfReady(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*) = 0;

    virtual void setPacketSender(::PacketSender&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
