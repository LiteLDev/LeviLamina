#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class BlockTypeRegistry;
// clang-format on

class BlockRegistryManager {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::SubClientId, ::std::weak_ptr<::BlockTypeRegistry>>& mClientIdRegistryMap();
    // NOLINTEND
};
