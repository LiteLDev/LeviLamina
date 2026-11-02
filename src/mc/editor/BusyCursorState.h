#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class BusyCursorState {
public:
    // BusyCursorState inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // BusyCursorState inner types define
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk317e49;
        ::ll::UntypedStorage<8, 8> mUnk5ba305;
        ::ll::UntypedStorage<8, 8> mUnk66f1fa;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka10577;
    ::ll::UntypedStorage<8, 64> mUnk31b6d6;
    ::ll::UntypedStorage<1, 1>  mUnkdf5637;
    ::ll::UntypedStorage<1, 1>  mUnkb81bab;
    ::ll::UntypedStorage<1, 1>  mUnk9e5133;
    ::ll::UntypedStorage<8, 8>  mUnkc4c1e9;
    ::ll::UntypedStorage<8, 8>  mUnk9715b9;
    ::ll::UntypedStorage<8, 8>  mUnk45201c;
    // NOLINTEND

public:
    // prevent constructor by default
    BusyCursorState& operator=(BusyCursorState const&);
    BusyCursorState(BusyCursorState const&);
    BusyCursorState();
};

} // namespace Editor::Services
