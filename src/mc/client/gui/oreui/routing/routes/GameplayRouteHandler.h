#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class GameplayRouteHandler {
public:
    // GameplayRouteHandler inner types declare
    // clang-format off
    struct GameState;
    // clang-format on

    // GameplayRouteHandler inner types define
    struct GameState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkb71409;
        ::ll::UntypedStorage<1, 1> mUnkf51f4b;
        // NOLINTEND

    public:
        // prevent constructor by default
        GameState& operator=(GameState const&);
        GameState(GameState const&);
        GameState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk15dc48;
    ::ll::UntypedStorage<8, 8>  mUnkd121a2;
    ::ll::UntypedStorage<8, 8>  mUnk6656ff;
    ::ll::UntypedStorage<8, 8>  mUnk89fde4;
    ::ll::UntypedStorage<8, 16> mUnk7e9217;
    ::ll::UntypedStorage<8, 16> mUnkbfa613;
    ::ll::UntypedStorage<1, 2>  mUnkad4fdb;
    ::ll::UntypedStorage<8, 16> mUnk9d322a;
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayRouteHandler& operator=(GameplayRouteHandler const&);
    GameplayRouteHandler(GameplayRouteHandler const&);
    GameplayRouteHandler();
};

} // namespace OreUI
