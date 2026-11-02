#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/BundleSelection.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerSlot.h"
#include "mc/client/gui/gameplay/data/gameplayui/CustomSplit.h"

namespace GameplayUI {

struct ContainerInteractionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::std::optional<::GameplayUI::ContainerSlot>>   touchSelection;
    ::ll::TypedStorage<4, 12, ::std::optional<::GameplayUI::BundleSelection>> bundleSelection;
    ::ll::TypedStorage<4, 20, ::std::optional<::GameplayUI::CustomSplit>>     customSplit;
    ::ll::TypedStorage<1, 1, bool>                                            customSplitIsActive;
    // NOLINTEND
};

} // namespace GameplayUI
