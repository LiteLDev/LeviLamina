#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/MinecraftInputHandler.h"

// auto generated forward declare list
// clang-format off
class ClientMoveInputHandler;
// clang-format on

class VanillaInputHandler : public ::MinecraftInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::ClientMoveInputHandler> _createClientMoveInputHandler() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ClientMoveInputHandler> $_createClientMoveInputHandler();
    // NOLINTEND
};
