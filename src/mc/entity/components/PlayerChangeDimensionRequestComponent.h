#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerChangeDimensionRequestComponent {
public:
    // PlayerChangeDimensionRequestComponent inner types define
    enum class State : uchar {
        AwaitingECSTick     = 0,
        ECSTransferComplete = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkce4386;
    ::ll::UntypedStorage<8, 48> mUnkbc626d;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerChangeDimensionRequestComponent& operator=(PlayerChangeDimensionRequestComponent const&);
    PlayerChangeDimensionRequestComponent(PlayerChangeDimensionRequestComponent const&);
    PlayerChangeDimensionRequestComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerChangeDimensionRequestComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
