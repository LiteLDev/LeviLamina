#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class AccessibilitySettingsCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::AccessibilitySettingsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mMarkAccessibilitySettingsShown;
    // NOLINTEND

public:
    // prevent constructor by default
    AccessibilitySettingsCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AccessibilitySettingsCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
