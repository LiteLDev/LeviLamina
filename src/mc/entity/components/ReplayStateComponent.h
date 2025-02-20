#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct IMovementCorrection;
// clang-format on

class ReplayStateComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7e24cc;
    ::ll::UntypedStorage<1, 1> mUnkd7fd0e;
    ::ll::UntypedStorage<1, 1> mUnk248d76;
    ::ll::UntypedStorage<1, 1> mUnk61e742;
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
    MCAPI ::AdvanceFrameResult _applyCorrection(
        ::std::shared_ptr<::IMovementCorrection> correction,
        ::Actor&                                 actor,
        uint64                                   destinationTimestamp,
        bool                                     addInput
    ) const;

    MCAPI ::ReplayCorrectionResult
    applyFrameCorrection(::Actor& actor, ::std::shared_ptr<::IMovementCorrection> correction, uint64 frame);

    MCAPI ::ReplayStateComponent& operator=(::ReplayStateComponent&&);

    MCAPI ~ReplayStateComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
