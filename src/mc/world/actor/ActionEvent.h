#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"

class ActionEvent {
public:
    // ActionEvent inner types define
    enum class ActionState : int {
        Start = 1,
        Stop  = 2,
    };

    enum : int {
        MoveLeft            = 1,
        MoveRight           = 2,
        MoveForward         = 3,
        MoveBackward        = 4,
        Ascend              = 5,
        Descend             = 6,
        PaddleLeft          = 7,
        PaddleRight         = 8,
        Sneak               = 10,
        Jump                = 11,
        Sprint              = 12,
        Dismount            = 14,
        SneakToggle         = 15,
        MobEffects          = 20,
        Drop                = 21,
        Inventory           = 22,
        Build               = 23,
        Destroy             = 24,
        Interact            = 25,
        Attack              = 26,
        Pause               = 30,
        Chat                = 31,
        Console             = 32,
        ThirdPersonView     = 33,
        Scoreboard          = 34,
        CodeBuilder         = 35,
        Slot0               = 50,
        Slot1               = 51,
        Slot2               = 52,
        Slot3               = 53,
        Slot4               = 54,
        Slot5               = 55,
        Slot6               = 56,
        Slot7               = 57,
        Slot8               = 58,
        Slot9               = 59,
        MenuUp              = 100,
        MenuDown            = 101,
        MenuLeft            = 102,
        MenuRight           = 103,
        MenuOk              = 104,
        MenuCancel          = 105,
        MenuInventoryDrop   = 106,
        MenuInventoryCancel = 107,
        PointerPressed      = 120,
        BuildOrInteract     = 130,
        DestroyOrAttack     = 131,
        BuildOrAttack       = 140,
        DestroyOrInteract   = 141,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        mActionId;
    ::ll::TypedStorage<4, 4, ::ActionEvent::ActionState> mActionState;
    ::ll::TypedStorage<1, 1, bool>                       mIsExclusive;
    ::ll::TypedStorage<1, 1, ::FocusImpact>              mFocusImpact;
    // NOLINTEND
};
