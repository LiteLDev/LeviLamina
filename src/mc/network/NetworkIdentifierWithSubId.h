#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on

struct NetworkIdentifierWithSubId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier> id;
    ::ll::TypedStorage<1, 1, ::SubClientId>         subClientId;
    // NOLINTEND
};
