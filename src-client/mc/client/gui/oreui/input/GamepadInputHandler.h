#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadEventThrottler.h"
#include "mc/client/gui/oreui/input/GamepadMode.h"
#include "mc/client/gui/oreui/input/GamepadState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { struct GamepadInput; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI {

class GamepadInputHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::OreUI::GamepadState>           mGamepadState;
    ::ll::TypedStorage<8, 784, ::OreUI::GamepadEventThrottler> mEventThrottler;
    ::ll::TypedStorage<1, 1, bool>                             mSwapABButtons;
    ::ll::TypedStorage<1, 1, bool>                             mSwapXYButtons;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSwapABOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSwapXYOptionSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GamepadInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GamepadInputHandler(::IOptionRegistry& options);

    MCAPI void _triggerButtonEvents(
        ::cohtml::View&              view,
        ::OreUI::GamepadMode         gamepadMode,
        ::OreUI::GamepadInput const& gamepadInput
    );

    MCAPI void
    handle(::OreUI::GamepadInput const& gamepadInput, ::cohtml::View& view, ::OreUI::GamepadMode gamepadMode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IOptionRegistry& options);
    // NOLINTEND
};

} // namespace OreUI
