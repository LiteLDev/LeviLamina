#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadButton.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FocusNavigationController; }
// clang-format on

namespace OreUI {

class FocusShortcutRegistry {
public:
    // FocusShortcutRegistry inner types declare
    // clang-format off
    struct Shortcut;
    // clang-format on

    // FocusShortcutRegistry inner types define
    struct Shortcut {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::OreUI::GamepadButton> button;
        ::ll::TypedStorage<8, 32, ::std::string>         locKey;
        // NOLINTEND
    };

    using FocusNodeId = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::FocusNavigationController const&> mController;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::vector<::OreUI::FocusShortcutRegistry::Shortcut>>>
        mShortcuts;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusShortcutRegistry& operator=(FocusShortcutRegistry const&);
    FocusShortcutRegistry(FocusShortcutRegistry const&);
    FocusShortcutRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clear();

    MCAPI uint findOwner(::OreUI::GamepadButton button) const;

    MCAPI void setShortcuts(uint id, ::std::vector<::OreUI::FocusShortcutRegistry::Shortcut> shortcuts);
    // NOLINTEND
};

} // namespace OreUI
