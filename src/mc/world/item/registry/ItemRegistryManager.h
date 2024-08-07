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
        MCAPI explicit ScopedItemRegistry(class ItemRegistryRef);

        MCAPI explicit ScopedItemRegistry(std::weak_ptr<class ItemRegistry> registry);

        MCAPI void construct(class ItemRegistryRef);

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
    MCAPI static class ItemRegistryRef getItemRegistry();

    MCAPI static void resetItemRegistry();

    MCAPI static void setItemRegistry(class ItemRegistryRef);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Bedrock::Threading::ThreadLocalObject<std::weak_ptr<class ItemRegistry>> mThreadLocalRegistry;

    // NOLINTEND
};
