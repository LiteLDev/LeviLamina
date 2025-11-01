#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveSortOrder.h"

struct SetDisplayObjectivePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDisplaySlotName;
    ::ll::TypedStorage<8, 32, ::std::string> mObjectiveName;
    ::ll::TypedStorage<8, 32, ::std::string> mObjectiveDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string> mCriteriaName;
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder> mSortOrder;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDisplayObjectivePacketPayload(SetDisplayObjectivePacketPayload const&);
    SetDisplayObjectivePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SetDisplayObjectivePacketPayload& operator=(::SetDisplayObjectivePacketPayload&&);

    MCAPI ::SetDisplayObjectivePacketPayload& operator=(::SetDisplayObjectivePacketPayload const&);

    MCAPI ~SetDisplayObjectivePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
