#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/input/MoveInputState.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class InputHandler;
// clang-format on

class ClientMoveInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientMoveInputHandler() = default;

    virtual void registerInputHandlers(::InputHandler&, ::IClientInstance const&) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _registerButtonDownTracking(
        ::InputHandler&        inputHandler,
        ::std::string const&   buttonName,
        ::MoveInputState::Flag setting
    );

    MCAPI static void _registerButtonStateTracking(
        ::InputHandler&        inputHandler,
        ::std::string const&   buttonName,
        ::MoveInputState::Flag setting
    );

    MCAPI static void _registerButtonStateTracking(
        ::InputHandler&      inputHandler,
        ::std::string const& buttonName,
        unsigned charMoveInputState::* bitfield,
        uchar                          bitmask
    );

    MCAPI static void _registerButtonUpTracking(
        ::InputHandler&        inputHandler,
        ::std::string const&   buttonName,
        ::MoveInputState::Flag setting
    );

    MCAPI static void _toggleClientSneak(::FocusImpact, ::IClientInstance& client);

    MCAPI static void _toggleClientSprint(::FocusImpact, ::IClientInstance& client);

    MCAPI static void _updateClientMoveVector(float x, float y, ::FocusImpact, ::IClientInstance& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
