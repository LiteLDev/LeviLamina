#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadMode.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ViewInputHandler; }
// clang-format on

namespace OreUI {

class BedrockInputSource {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI BedrockInputSource();

    MCAPI void handleInput(::OreUI::ViewInputHandler& inputHandler, ::OreUI::GamepadMode gamepadMode);

    MCAPI ~BedrockInputSource();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
