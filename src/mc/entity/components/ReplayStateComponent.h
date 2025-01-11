#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/input/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorHistory;
class EntityContext;
class EntityRegistry;
class PlayerAuthInputPacket;
struct IMovementCorrection;
struct IReplayStatePolicy;
struct IReplayableActorInput;
struct MovementCorrection;
// clang-format on

class ReplayStateComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7e24cc;
    ::ll::UntypedStorage<8, 8> mUnk5a088a;
    ::ll::UntypedStorage<8, 8> mUnkb84ec7;
    ::ll::UntypedStorage<8, 8> mUnk827b65;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplayStateComponent& operator=(ReplayStateComponent const&);
    ReplayStateComponent(ReplayStateComponent const&);
    ReplayStateComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReplayStateComponent(::ReplayStateComponent&&);

    MCAPI
    ReplayStateComponent(::std::unique_ptr<::ActorHistory> history, ::std::unique_ptr<::IReplayStatePolicy> policy);

    MCAPI ::AdvanceFrameResult _applyCorrection(
        ::std::shared_ptr<::IMovementCorrection> correction,
        ::Actor&                                 actor,
        uint64                                   destinationTimestamp,
        bool                                     addInput
    ) const;

    MCAPI void addInputToCurrentFrame(::std::shared_ptr<::IReplayableActorInput> input) const;

    MCAPI void addInputToFrontOfCurrentFrame(::std::shared_ptr<::IReplayableActorInput> input) const;

    MCAPI ::ReplayCorrectionResult
    applyFrameCorrection(::Actor& actor, ::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);

    MCAPI void clearHistory();

    MCAPI void enqueueInputSimulation(::std::unique_ptr<::IReplayableActorInput> input);

    MCFOLD uint64 getCurrentTick() const;

    MCAPI void notifyOfExternalCorrection() const;

    MCAPI ::ReplayStateComponent& operator=(::ReplayStateComponent&&);

    MCAPI ::MovementCorrection
    shouldSendCorrectionToClient(::EntityContext& entity, ::PlayerAuthInputPacket const& packet) const;

    MCAPI void tick(::Actor* actor, uint64 currentTick, ::EntityRegistry* registry);

    MCAPI ~ReplayStateComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ReplayStateComponent&&);

    MCAPI void* $ctor(::std::unique_ptr<::ActorHistory> history, ::std::unique_ptr<::IReplayStatePolicy> policy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
