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
    MCNAPI static ::std::unordered_map<::SubClientId, ::std::weak_ptr<::BlockTypeRegistry>>& mClientIdRegistryMap();

    MCNAPI static ::std::weak_ptr<::BlockTypeRegistry>& mClientRegistry();

    MCNAPI static ::std::weak_ptr<::BlockTypeRegistry>& mServerRegistry();

    MCNAPI static ::std::weak_ptr<::BlockTypeRegistry>& mThreadLocalRegistry();
    // NOLINTEND
};
