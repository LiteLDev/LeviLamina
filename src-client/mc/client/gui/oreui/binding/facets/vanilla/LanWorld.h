#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

namespace OreUI {

struct LanWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> id;
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 32, ::std::string> ownerName;
    ::ll::TypedStorage<8, 32, ::std::string> address;
    ::ll::TypedStorage<4, 4, int>            port;
    ::ll::TypedStorage<4, 4, ::GameType>     gameMode;
    ::ll::TypedStorage<1, 1, bool>           isHardcore;
    ::ll::TypedStorage<4, 4, int>            playerCount;
    ::ll::TypedStorage<4, 4, int>            capacity;
    ::ll::TypedStorage<8, 32, ::std::string> version;
    ::ll::TypedStorage<1, 1, bool>           isEditorWorld;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LanWorld();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
