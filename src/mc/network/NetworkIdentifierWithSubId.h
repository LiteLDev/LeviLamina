#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkIdentifier.h"

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
    ::NetworkIdentifier id;
    ::SubClientId       subClientId;
    // NOLINTEND
};
