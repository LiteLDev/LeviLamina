#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItem.h"

namespace GameplayUI {

struct ContainerInteractionsContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::GameplayUI::ContainerItem> slotItem;
    ::ll::TypedStorage<8, 136, ::GameplayUI::ContainerItem> cursorItem;
    ::ll::TypedStorage<1, 1, bool>                          isDoubleClick;
    ::ll::TypedStorage<1, 1, bool>                          isShiftClick;
    // NOLINTEND
};

} // namespace GameplayUI
