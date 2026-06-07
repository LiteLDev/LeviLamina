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
    virtual void registerInputHandlers(::InputHandler& inputHandler, ::IClientInstance const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $registerInputHandlers(::InputHandler& inputHandler, ::IClientInstance const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
