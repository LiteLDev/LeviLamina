#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/ServerLocatorBar.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerLocatorBar;
// clang-format on

class VanillaWaypointManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ServerLocatorBar::GroupStrongHandle> mWaypointGroup;
    ::ll::TypedStorage<1, 1, bool>                                   mIsLocatorBarEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void update(::Player& self, ::ServerLocatorBar& serverLocatorBar, bool isLocatorBarEnabled);

    MCAPI ~VanillaWaypointManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
