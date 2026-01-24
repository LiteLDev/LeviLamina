#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/AsyncJoinDenyReason.h"

struct AsyncJoinDeny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AsyncJoinDenyReason>           denyReason;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> customDisconnectionString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AsyncJoinDeny();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
