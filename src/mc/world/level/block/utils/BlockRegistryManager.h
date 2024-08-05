#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"
#include "mc/enums/SubClientId.h"

class BlockRegistryManager {
public:
    // prevent constructor by default
    BlockRegistryManager& operator=(BlockRegistryManager const&);
    BlockRegistryManager(BlockRegistryManager const&);
    BlockRegistryManager();

    // private:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<::SubClientId, std::weak_ptr<class BlockTypeRegistry>> mClientIdRegistryMap;

    MCAPI static std::weak_ptr<class BlockTypeRegistry> mClientRegistry;

    MCAPI static std::weak_ptr<class BlockTypeRegistry> mServerRegistry;

    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::weak_ptr<class BlockTypeRegistry>>
        mThreadLocalRegistry;

    // NOLINTEND
};
