#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadButton.h"

namespace GameplayUI {

struct ContainerInputLegendEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OreUI::GamepadButton> button;
    ::ll::TypedStorage<8, 32, ::std::string>         locKey;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ContainerInputLegendEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
