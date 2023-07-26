#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class BlockRegistryManager {

public:
    // prevent constructor by default
    BlockRegistryManager& operator=(BlockRegistryManager const&) = delete;
    BlockRegistryManager(BlockRegistryManager const&)            = delete;
    BlockRegistryManager()                                       = delete;

    // private:

private:
    /**
     * @symbol
     * ?mClientIdRegistryMap\@BlockRegistryManager\@\@0V?$unordered_map\@W4SubClientId\@\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@U?$hash\@W4SubClientId\@\@\@3\@U?$equal_to\@W4SubClientId\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SubClientId\@\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        enum class SubClientId,
        class std::weak_ptr<class BlockTypeRegistry>,
        struct std::hash<enum class SubClientId>,
        struct std::equal_to<enum class SubClientId>,
        class std::allocator<
            struct std::pair<enum class SubClientId const, class std::weak_ptr<class BlockTypeRegistry>>>>
        mClientIdRegistryMap; // NOLINT
    /**
     * @symbol ?mClientRegistry\@BlockRegistryManager\@\@0V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class BlockTypeRegistry> mClientRegistry; // NOLINT
    /**
     * @symbol ?mServerRegistry\@BlockRegistryManager\@\@0V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class BlockTypeRegistry> mServerRegistry; // NOLINT
    /**
     * @symbol
     * ?mThreadLocalRegistry\@BlockRegistryManager\@\@0V?$ThreadLocalObject\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@\@2\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<
        class std::weak_ptr<class BlockTypeRegistry>,
        class std::allocator<class std::weak_ptr<class BlockTypeRegistry>>>
        mThreadLocalRegistry; // NOLINT
};
