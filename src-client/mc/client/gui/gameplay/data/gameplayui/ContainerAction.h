#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ContainerActionType.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerSlot.h"

namespace GameplayUI {

struct ContainerAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameplayUI::ContainerActionType> type;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot>       source;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot>       destination;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot>       splitStart;
    // NOLINTEND
};

} // namespace GameplayUI
