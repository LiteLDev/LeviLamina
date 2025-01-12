#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerUpdateInteractionEvent {
public:
    // PlayerUpdateInteractionEvent inner types define
    enum class ActionType : int {
        ApproachEntity = 0,
        LeaveEntity    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf7efd0;
    ::ll::UntypedStorage<8, 24> mUnkd39568;
    ::ll::UntypedStorage<4, 4>  mUnk566196;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerUpdateInteractionEvent& operator=(PlayerUpdateInteractionEvent const&);
    PlayerUpdateInteractionEvent(PlayerUpdateInteractionEvent const&);
    PlayerUpdateInteractionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerUpdateInteractionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
