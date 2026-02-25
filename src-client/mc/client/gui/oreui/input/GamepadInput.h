#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct GamepadInput {
public:
    // GamepadInput inner types declare
    // clang-format off
    struct ButtonEvent;
    struct TriggerEvent;
    struct StickEvent;
    // clang-format on

    // GamepadInput inner types define
    struct ButtonEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>  buttonId;
        ::ll::TypedStorage<1, 1, bool const> pressed;
        // NOLINTEND
    };

    struct TriggerEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>   triggerId;
        ::ll::TypedStorage<4, 4, float const> magnitude;
        // NOLINTEND
    };

    struct StickEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>   stickId;
        ::ll::TypedStorage<4, 4, float const> x;
        ::ll::TypedStorage<4, 4, float const> y;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GamepadInput::ButtonEvent>>  mButtonEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GamepadInput::TriggerEvent>> mTriggerEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GamepadInput::StickEvent>>   mStickEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GamepadInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
