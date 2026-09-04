#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
// clang-format on

class LevelEventHandlerRegistrar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mServerLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelEventHandlerRegistrar& operator=(LevelEventHandlerRegistrar const&);
    LevelEventHandlerRegistrar(LevelEventHandlerRegistrar const&);
    LevelEventHandlerRegistrar();
};
