#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/attribute/RedefinitionMode.h"

class Attribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::RedefinitionMode> mRedefinitionMode;
    ::ll::TypedStorage<1, 1, bool>               mSyncable;
    ::ll::TypedStorage<4, 4, uint>               mIDValue;
    ::ll::TypedStorage<8, 48, ::HashedString>    mName;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Attribute& getByName(::HashedString const& attribute);
    // NOLINTEND
};
