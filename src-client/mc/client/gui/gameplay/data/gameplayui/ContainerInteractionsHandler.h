#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ContainerSlot.h"
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
    ::ll::TypedStorage<1, 1, bool>                        mDoneActionThisClick;
    ::ll::TypedStorage<1, 1, bool>                        mPressWasDoubleClick;
    ::ll::TypedStorage<1, 1, bool>                        mIsSplitting;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot> mSplitStart;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::GameplayUI::ContainerAction handleSlotMousePress(
        ::GameplayUI::ContainerInteractionsContext context,
        int                                        button,
        ::ContainerEnumName                        container,
        int                                        slot
    );

    MCAPI ::GameplayUI::ContainerAction handleSlotMouseRelease(
        ::GameplayUI::ContainerInteractionsContext context,
        int                                        button,
        ::ContainerEnumName                        container,
        int                                        slot
    );
    // NOLINTEND
};

} // namespace GameplayUI
