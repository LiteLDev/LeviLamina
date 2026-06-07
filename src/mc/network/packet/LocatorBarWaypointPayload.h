#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ServerWaypoint.h"
#include "mc/world/ServerWaypointGroup.h"
#include "mc/world/WaypointGroup.h"

struct LocatorBarWaypointPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ServerWaypoint::Payload>      mPayload;
    ::ll::TypedStorage<8, 16, ::WaypointGroup::WaypointHandle> mHandle;
    ::ll::TypedStorage<1, 1, ::ServerWaypointGroup::Action>    mAction;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LocatorBarWaypointPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
