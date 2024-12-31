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
    // prevent constructor by default
    IPlayerDimensionTransferer& operator=(IPlayerDimensionTransferer const&);
    IPlayerDimensionTransferer(IPlayerDimensionTransferer const&);
    IPlayerDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~IPlayerDimensionTransferer() = default;

    // vIndex: 3
    virtual void
    playerSaveLimboActors(::Player&, ::ChangeDimensionRequest&, ::Dimension&, ::PlayerLimboActorManager*) = 0;

    // vIndex: 4
    virtual void playerDestroyRemotePlayers(::GameplayUserManager&) = 0;

    // vIndex: 5
    virtual void playerStartChangeDimensionSuspendRegion(::Player&, ::DimensionType) = 0;

    // vIndex: 6
    virtual void setTransitionLocation(::Player&, ::ChangeDimensionRequest&, ::Dimension&) = 0;

    // vIndex: 7
    virtual void syncTransitionComponentTargetPosition(::Player&, ::ChangeDimensionRequest const&) = 0;

    // vIndex: 8
    virtual void playerDestroyRegion(::Player&, ::ChangeDimensionRequest const&) = 0;

    // vIndex: 9
    virtual void playerPrepareRegion(::Player&, ::ChangeDimensionRequest const&, ::Dimension const&) = 0;

    // vIndex: 10
    virtual bool playerWaitForServer(::Player&, ::std::chrono::steady_clock::time_point) = 0;

    // vIndex: 11
    virtual bool playerWaitForDimensionTransitionSystem(::Player const&, ::EntityRegistry&) = 0;

    // vIndex: 12
    virtual void sendClientRespawnMovePacketFromServer(::Player const&, ::ChangeDimensionRequest&) = 0;

    // vIndex: 13
    virtual bool waitForSubChunks(::Player&, ::Dimension const&) = 0;

    // vIndex: 14
    virtual void startWaitForRespawn(::Player const&) = 0;

    // vIndex: 15
    virtual void playerSwitchDimension(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*) = 0;

    // vIndex: 16
    virtual bool doRespawnIfReady(::Player&, ::ChangeDimensionRequest&, ::AddLimboActorHelper*) = 0;

    // vIndex: 17
    virtual void setPacketSender(::PacketSender&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
