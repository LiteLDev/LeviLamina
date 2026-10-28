#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadButton.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FocusNavigationController; }
namespace OreUI { class FocusShortcutRegistry; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI {

class FocusNavigationBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View&>                                   mView;
    ::ll::TypedStorage<8, 8, ::OreUI::FocusNavigationController*>               mController;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FocusShortcutRegistry>> mShortcuts;
    ::ll::TypedStorage<8, 24, ::std::vector<void*>>                             mEventHandles;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusNavigationBinding& operator=(FocusNavigationBinding const&);
    FocusNavigationBinding(FocusNavigationBinding const&);
    FocusNavigationBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void bind();

    MCAPI void triggerFocusActivate(uint focusedId, ::OreUI::GamepadButton button);
    // NOLINTEND
};

} // namespace OreUI
