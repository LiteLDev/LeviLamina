#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class ItemRegistryManager {
public:
    // ItemRegistryManager inner types declare
    // clang-format off
    class ScopedItemRegistry;
    // clang-format on

    // ItemRegistryManager inner types define
    class ScopedItemRegistry {

    public:
        // prevent constructor by default
        ScopedItemRegistry& operator=(ScopedItemRegistry const&) = delete;
        ScopedItemRegistry(ScopedItemRegistry const&)            = delete;
        ScopedItemRegistry()                                     = delete;

    public:
        /**
         * @symbol ??0ScopedItemRegistry\@ItemRegistryManager\@\@QEAA\@VItemRegistryRef\@\@\@Z
         */
        MCAPI ScopedItemRegistry(class ItemRegistryRef); // NOLINT
        /**
         * @symbol ??0ScopedItemRegistry\@ItemRegistryManager\@\@QEAA\@V?$weak_ptr\@VItemRegistry\@\@\@std\@\@\@Z
         */
        MCAPI ScopedItemRegistry(class std::weak_ptr<class ItemRegistry>); // NOLINT
        /**
         * @symbol ?construct\@ScopedItemRegistry\@ItemRegistryManager\@\@QEAAXVItemRegistryRef\@\@\@Z
         */
        MCAPI void construct(class ItemRegistryRef); // NOLINT
        /**
         * @symbol ??1ScopedItemRegistry\@ItemRegistryManager\@\@QEAA\@XZ
         */
        MCAPI ~ScopedItemRegistry(); // NOLINT
    };

public:
    // prevent constructor by default
    ItemRegistryManager& operator=(ItemRegistryManager const&) = delete;
    ItemRegistryManager(ItemRegistryManager const&)            = delete;
    ItemRegistryManager()                                      = delete;

public:
    /**
     * @symbol ?getItemRegistry\@ItemRegistryManager\@\@SA?AVItemRegistryRef\@\@XZ
     */
    MCAPI static class ItemRegistryRef getItemRegistry(); // NOLINT
    /**
     * @symbol ?resetItemRegistry\@ItemRegistryManager\@\@SAXXZ
     */
    MCAPI static void resetItemRegistry(); // NOLINT
    /**
     * @symbol ?setItemRegistry\@ItemRegistryManager\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void setItemRegistry(class ItemRegistryRef); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?mThreadLocalRegistry\@ItemRegistryManager\@\@0V?$ThreadLocalObject\@V?$weak_ptr\@VItemRegistry\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VItemRegistry\@\@\@std\@\@\@2\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<
        class std::weak_ptr<class ItemRegistry>,
        class std::allocator<class std::weak_ptr<class ItemRegistry>>>
        mThreadLocalRegistry; // NOLINT
};
