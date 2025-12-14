#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/ClientMoveInputHandler.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class InputHandler;
// clang-format on

class VanillaMoveInputHandler : public ::ClientMoveInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void registerInputHandlers(::InputHandler& inputHandler, ::IClientInstance const& client) /*override*/;

    virtual ~VanillaMoveInputHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerInputHandlers(::InputHandler& inputHandler, ::IClientInstance const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
