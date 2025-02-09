#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/RedefinitionMode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

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
    // member functions
    // NOLINTBEGIN
    MCAPI Attribute(::HashedString const& name, ::RedefinitionMode redefMode, bool isSyncable);

    MCFOLD ::HashedString const& getName() const;

    MCFOLD ::RedefinitionMode getRedefinitionMode() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Attribute& getByName(::HashedString const& attribute);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& name, ::RedefinitionMode redefMode, bool isSyncable);
    // NOLINTEND
};
