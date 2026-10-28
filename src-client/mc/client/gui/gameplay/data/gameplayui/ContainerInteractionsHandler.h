#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ContainerInteractionState.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerSlot.h"
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/MouseButton.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct ContainerAction; }
namespace GameplayUI { struct ContainerInteractionsContext; }
// clang-format on

namespace GameplayUI {

class ContainerInteractionsHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                          mDoneActionThisClick;
    ::ll::TypedStorage<1, 1, bool>                                          mPressWasDoubleClick;
    ::ll::TypedStorage<1, 1, bool>                                          mIsDistributingItem;
    ::ll::TypedStorage<1, 1, bool>                                          mJustSetCustomSplit;
    ::ll::TypedStorage<4, 12, ::std::optional<::GameplayUI::ContainerSlot>> mGamepadSplitCustomCandidate;
    ::ll::TypedStorage<1, 1, bool>                                          mGamepadDidPlaceStack;
    ::ll::TypedStorage<1, 1, bool>                                          mGamepadDidPlaceOne;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot>                   mDistributeSource;
    ::ll::TypedStorage<4, 48, ::GameplayUI::ContainerInteractionState>      mState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::GameplayUI::ContainerAction handleSlotGamepadDrag(
        ::GameplayUI::ContainerInteractionsContext context,
        ::OreUI::GamepadButton                     button,
        ::ContainerEnumName                        container,
        int                                        slot
    );

    MCAPI ::GameplayUI::ContainerAction handleSlotGamepadPress(
        ::GameplayUI::ContainerInteractionsContext context,
        ::OreUI::GamepadButton                     button,
        ::ContainerEnumName                        container,
        int                                        slot
    );

    MCAPI ::GameplayUI::ContainerAction handleSlotMousePress(
        ::GameplayUI::ContainerInteractionsContext context,
        ::OreUI::MouseButton                       button,
        ::ContainerEnumName                        container,
        int                                        slot
    );

    MCAPI ::GameplayUI::ContainerAction handleSlotMouseRelease(
        ::GameplayUI::ContainerInteractionsContext context,
        ::OreUI::MouseButton                       button,
        ::ContainerEnumName                        container,
        int                                        slot
    );

    MCAPI ::GameplayUI::ContainerAction
    handleSlotTouchRelease(::GameplayUI::ContainerInteractionsContext context, ::ContainerEnumName container, int slot);
    // NOLINTEND
};

} // namespace GameplayUI
