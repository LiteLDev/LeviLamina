#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/RewindType.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CorrectPlayerMovePredictionPacket;
class EntityContext;
class MovePlayerPacket;
class Player;
class ReplayStateComponent;
class UpdateAttributesPacket;
class Vec2;
struct IMovementCorrection;
// clang-format on

class ClientPlayerRewindListener : public ::PlayerEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onCameraSetPlayerRot(::Player& player, ::Vec2 const& rotation) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::EventResult _applyCorrectionToTick(
        uint64                                   tick,
        ::std::unique_ptr<::IMovementCorrection> correction,
        ::Actor&                                 actorToRewind,
        ::ReplayStateComponent&                  replay
    );

    MCNAPI static ::Actor* _getRewindableActor(::Player& player, ::RewindType rewindType);

    MCNAPI static ::EventResult
    _onCorrectPlayerMovePredictionPacket(::Player& player, ::CorrectPlayerMovePredictionPacket const& packet);

    MCNAPI static ::EventResult _onPlayerMovePacketReceived(::Player& player, ::MovePlayerPacket const& packet);

    MCNAPI static ::EventResult
    _onUpdateAttributesPacketReceived(::Actor& actor, ::std::shared_ptr<::UpdateAttributesPacket> packet);

    MCNAPI static ::ReplayStateComponent* tryGetReplayStateComponentForCorrection(::EntityContext& entity, uint64 tick);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onCameraSetPlayerRot(::Player& player, ::Vec2 const& rotation);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
