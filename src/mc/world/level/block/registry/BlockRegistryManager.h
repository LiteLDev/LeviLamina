#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/platform/threading/ThreadLocalObject.h"

// auto generated forward declare list
// clang-format off
class BlockTypeRegistry;
// clang-format on

class BlockRegistryManager {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::SubClientId, ::std::weak_ptr<::BlockTypeRegistry>>& mClientIdRegistryMap();

    MCAPI static ::std::weak_ptr<::BlockTypeRegistry>& mClientRegistry();

    MCAPI static ::std::weak_ptr<::BlockTypeRegistry>& mServerRegistry();

    MCAPI static ::Bedrock::Threading::ThreadLocalObject<::std::weak_ptr<::BlockTypeRegistry>>& mThreadLocalRegistry();
    // NOLINTEND
};
