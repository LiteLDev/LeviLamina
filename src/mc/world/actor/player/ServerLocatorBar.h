#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerWaypointGroup;
// clang-format on

class ServerLocatorBar {
public:
    // ServerLocatorBar inner types declare
    // clang-format off
    class GroupStrongHandle;
    // clang-format on

    // ServerLocatorBar inner types define
    class GroupStrongHandle {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ServerWaypointGroup>> mWaypointGroup;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ServerWaypointGroup>>> mWaypointGroups;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ServerLocatorBar::GroupStrongHandle createGroupHandle();

    MCAPI void update(::Player& player);
    // NOLINTEND
};
