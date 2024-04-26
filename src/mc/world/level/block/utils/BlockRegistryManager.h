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
    // symbol:
    // ?mClientIdRegistryMap@BlockRegistryManager@@0V?$unordered_map@W4SubClientId@@V?$weak_ptr@VBlockTypeRegistry@@@std@@U?$hash@W4SubClientId@@@3@U?$equal_to@W4SubClientId@@@3@V?$allocator@U?$pair@$$CBW4SubClientId@@V?$weak_ptr@VBlockTypeRegistry@@@std@@@std@@@3@@std@@A
    MCAPI static std::unordered_map<::SubClientId, std::weak_ptr<class BlockTypeRegistry>> mClientIdRegistryMap;

    // symbol: ?mClientRegistry@BlockRegistryManager@@0V?$weak_ptr@VBlockTypeRegistry@@@std@@A
    MCAPI static std::weak_ptr<class BlockTypeRegistry> mClientRegistry;

    // symbol: ?mServerRegistry@BlockRegistryManager@@0V?$weak_ptr@VBlockTypeRegistry@@@std@@A
    MCAPI static std::weak_ptr<class BlockTypeRegistry> mServerRegistry;

    // symbol:
    // ?mThreadLocalRegistry@BlockRegistryManager@@0V?$ThreadLocalObject@V?$weak_ptr@VBlockTypeRegistry@@@std@@V?$allocator@V?$weak_ptr@VBlockTypeRegistry@@@std@@@2@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::weak_ptr<class BlockTypeRegistry>>
        mThreadLocalRegistry;

    // NOLINTEND
};
