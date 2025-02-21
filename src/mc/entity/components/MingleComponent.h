#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

class MingleComponent {
public:
    // MingleComponent inner types define
    enum class MingleState : int {
        Unavailable      = 0,
        Available        = 1,
        PartneredActive  = 2,
        PartneredPassive = 3,
        Mingling         = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MingleComponent::MingleState> mMingleState;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                mPartnerId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                mPreviousPartnerId;
    // NOLINTEND
};
