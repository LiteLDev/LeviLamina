#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorHistory;
struct IMovementCorrection;
struct IReplayStatePolicy;
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
    MCNAPI ::AdvanceFrameResult _applyCorrection(
        ::std::shared_ptr<::IMovementCorrection> correction,
        ::Actor&                                 actor,
        uint64                                   destinationTimestamp,
        bool                                     addInput
    ) const;

    MCNAPI ::ReplayCorrectionResult
    applyFrameCorrection(::Actor& actor, ::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);

    MCNAPI void clearHistory();

    MCNAPI ::ReplayStateComponent& operator=(::ReplayStateComponent&&);

    MCNAPI ~ReplayStateComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
