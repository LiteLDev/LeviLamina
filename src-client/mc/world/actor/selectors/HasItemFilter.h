#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandIntegerRange.h"

struct HasItemFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>         itemName;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>   auxValue;
    ::ll::TypedStorage<4, 12, ::CommandIntegerRange> quantity;
    ::ll::TypedStorage<8, 32, ::std::string>         location;
    ::ll::TypedStorage<4, 12, ::CommandIntegerRange> slot;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~HasItemFilter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
