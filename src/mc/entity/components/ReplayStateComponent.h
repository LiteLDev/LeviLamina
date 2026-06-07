#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorHistory;
class EntityContext;
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
    ::ll::TypedStorage<1, 1, bool>                                    mForceCorrection;
    ::ll::TypedStorage<1, 1, bool>                                    mShouldReportNextCorrectionTelemetry;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCorrectionTelemetryEnabled;
    ::ll::TypedStorage<1, 1, uchar>                                   mDivergenceCounter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorHistory>>       mHistory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IReplayStatePolicy>> mPolicy;
    ::ll::TypedStorage<8, 8, uint64>                                  mCurrentTick;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplayStateComponent& operator=(ReplayStateComponent const&);
    ReplayStateComponent(ReplayStateComponent const&);
    ReplayStateComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReplayStateComponent(::ReplayStateComponent&& rhs);

    MCAPI
    ReplayStateComponent(::std::unique_ptr<::ActorHistory> history, ::std::unique_ptr<::IReplayStatePolicy> policy);

    MCAPI ::AdvanceFrameResult _applyCorrection(
        ::std::shared_ptr<::IMovementCorrection> correction,
        ::Actor&                                 actor,
        uint64                                   destinationTimestamp,
        bool                                     addInput
    ) const;

#ifdef LL_PLAT_C
    MCFOLD ::ActorHistory const* _getHistory() const;

    MCAPI bool _shouldReportCorrectionTelemetry() const;
#endif

    MCAPI void addCorrectionToCurrentFrame(::std::shared_ptr<::IMovementCorrection> correction) const;

#ifdef LL_PLAT_C
    MCAPI void advanceHistory(::EntityContext* entity);
#endif

    MCFOLD void advanceTick(uint64 currentTick);

    MCAPI ::ReplayCorrectionResult
    applyFrameCorrection(::Actor& actor, ::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);

    MCAPI void clearHistory();

#ifdef LL_PLAT_C
    MCAPI void disableNextCorrectionTelemetry();
#endif

    MCAPI ::IReplayableActorInput* getCurrentCapturedInput();

    MCFOLD uint64 getCurrentTick() const;

    MCAPI ::IReplayableActorInput* getOrCreateNextCapturedInput();

#ifdef LL_PLAT_C
    MCAPI ::std::optional<uint64> handleAdvanceAndRewind(::Actor& actor);
#endif

    MCAPI void notifyOfExternalCorrection() const;

    MCAPI ::ReplayStateComponent& operator=(::ReplayStateComponent&&);

    MCAPI ::MovementCorrection shouldSendCorrectionToClient(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        bool                           isStrictMovement
    ) const;

    MCAPI ~ReplayStateComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ReplayStateComponent&& rhs);

    MCAPI void* $ctor(::std::unique_ptr<::ActorHistory> history, ::std::unique_ptr<::IReplayStatePolicy> policy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
