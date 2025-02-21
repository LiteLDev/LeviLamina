#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
// clang-format on

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
    ::ll::TypedStorage<1, 1, ::PlayerChangeDimensionRequestComponent::State> mState;
    ::ll::TypedStorage<8, 48, ::ChangeDimensionRequest>                      mRequest;
    // NOLINTEND
};
