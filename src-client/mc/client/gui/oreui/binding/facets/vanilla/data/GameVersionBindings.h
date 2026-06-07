#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class GameVersion;
// clang-format on

namespace OreUI {

struct GameVersionBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  major;
    ::ll::TypedStorage<4, 4, int>  minor;
    ::ll::TypedStorage<4, 4, int>  patch;
    ::ll::TypedStorage<4, 4, int>  revision;
    ::ll::TypedStorage<1, 1, bool> isBeta;
    // NOLINTEND

public:
    // prevent constructor by default
    GameVersionBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameVersionBindings(::BaseGameVersion const& baseGameVersion);

    MCAPI explicit GameVersionBindings(::GameVersion const& gameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BaseGameVersion const& baseGameVersion);

    MCAPI void* $ctor(::GameVersion const& gameVersion);
    // NOLINTEND
};

} // namespace OreUI
