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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRYMANAGER_SCOPEDITEMREGISTRY
    public:
        ScopedItemRegistry& operator=(ScopedItemRegistry const&) = delete;
        ScopedItemRegistry(ScopedItemRegistry const&)            = delete;
        ScopedItemRegistry()                                     = delete;
#endif

    public:
        /**
         * @symbol ??0ScopedItemRegistry\@ItemRegistryManager\@\@QEAA\@VItemRegistryRef\@\@\@Z
         */
        MCAPI ScopedItemRegistry(class ItemRegistryRef);
        /**
         * @symbol ??0ScopedItemRegistry\@ItemRegistryManager\@\@QEAA\@V?$weak_ptr\@VItemRegistry\@\@\@std\@\@\@Z
         */
        MCAPI ScopedItemRegistry(class std::weak_ptr<class ItemRegistry>);
        /**
         * @symbol ?construct\@ScopedItemRegistry\@ItemRegistryManager\@\@QEAAXVItemRegistryRef\@\@\@Z
         */
        MCAPI void construct(class ItemRegistryRef);
        /**
         * @symbol ??1ScopedItemRegistry\@ItemRegistryManager\@\@QEAA\@XZ
         */
        MCAPI ~ScopedItemRegistry();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRYMANAGER
public:
    ItemRegistryManager& operator=(ItemRegistryManager const&) = delete;
    ItemRegistryManager(ItemRegistryManager const&)            = delete;
    ItemRegistryManager()                                      = delete;
#endif

public:
    /**
     * @symbol ?getItemRegistry\@ItemRegistryManager\@\@SA?AVItemRegistryRef\@\@XZ
     */
    MCAPI static class ItemRegistryRef getItemRegistry();
    /**
     * @symbol ?resetItemRegistry\@ItemRegistryManager\@\@SAXXZ
     */
    MCAPI static void resetItemRegistry();
    /**
     * @symbol ?setItemRegistry\@ItemRegistryManager\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void setItemRegistry(class ItemRegistryRef);

    // private:

private:
    /**
     * @symbol
     * ?mThreadLocalRegistry\@ItemRegistryManager\@\@0V?$ThreadLocalObject\@V?$weak_ptr\@VItemRegistry\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VItemRegistry\@\@\@std\@\@\@2\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<
        class std::weak_ptr<class ItemRegistry>,
        class std::allocator<class std::weak_ptr<class ItemRegistry>>>
        mThreadLocalRegistry;
};
