#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItem.h"

namespace GameplayUI {

struct ContainerInteractionsContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 304, ::GameplayUI::ContainerItem> slotItem;
    ::ll::TypedStorage<8, 304, ::GameplayUI::ContainerItem> cursorItem;
    ::ll::TypedStorage<8, 304, ::GameplayUI::ContainerItem> selectedItem;
    ::ll::TypedStorage<1, 1, bool>                          isCreativeMode;
    ::ll::TypedStorage<1, 1, bool>                          isDoubleClick;
    ::ll::TypedStorage<1, 1, bool>                          isShiftClick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ContainerInteractionsContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
