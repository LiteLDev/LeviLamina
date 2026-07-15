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
    virtual void registerInputHandlers(::InputHandler&, ::IClientInstance const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
