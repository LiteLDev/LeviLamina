#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/RecipeBookTab.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"

namespace GameplayUI {

struct RecipeBookTabData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameplayUI::RecipeBookTab> id;
    ::ll::TypedStorage<4, 4, ::InventoryLeftTabIndex>     index;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>         container;
    // NOLINTEND
};

} // namespace GameplayUI
