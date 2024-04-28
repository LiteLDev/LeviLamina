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
        ScopedItemRegistry& operator=(ScopedItemRegistry const&);
        ScopedItemRegistry(ScopedItemRegistry const&);
        ScopedItemRegistry();

    public:
        // NOLINTBEGIN
        // symbol: ??0ScopedItemRegistry@ItemRegistryManager@@QEAA@VItemRegistryRef@@@Z
        MCAPI explicit ScopedItemRegistry(class ItemRegistryRef);

        // symbol: ??0ScopedItemRegistry@ItemRegistryManager@@QEAA@V?$weak_ptr@VItemRegistry@@@std@@@Z
        MCAPI explicit ScopedItemRegistry(std::weak_ptr<class ItemRegistry> registry);

        // symbol: ?construct@ScopedItemRegistry@ItemRegistryManager@@QEAAXVItemRegistryRef@@@Z
        MCAPI void construct(class ItemRegistryRef);

        // symbol: ??1ScopedItemRegistry@ItemRegistryManager@@QEAA@XZ
        MCAPI ~ScopedItemRegistry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ItemRegistryManager& operator=(ItemRegistryManager const&);
    ItemRegistryManager(ItemRegistryManager const&);
    ItemRegistryManager();

public:
    // NOLINTBEGIN
    // symbol: ?getItemRegistry@ItemRegistryManager@@SA?AVItemRegistryRef@@XZ
    MCAPI static class ItemRegistryRef getItemRegistry();

    // symbol: ?resetItemRegistry@ItemRegistryManager@@SAXXZ
    MCAPI static void resetItemRegistry();

    // symbol: ?setItemRegistry@ItemRegistryManager@@SAXVItemRegistryRef@@@Z
    MCAPI static void setItemRegistry(class ItemRegistryRef);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mThreadLocalRegistry@ItemRegistryManager@@0V?$ThreadLocalObject@V?$weak_ptr@VItemRegistry@@@std@@V?$allocator@V?$weak_ptr@VItemRegistry@@@std@@@2@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::weak_ptr<class ItemRegistry>> mThreadLocalRegistry;

    // NOLINTEND
};
