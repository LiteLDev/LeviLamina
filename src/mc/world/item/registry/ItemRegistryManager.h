#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/ThreadLocalObject.h"

// auto generated forward declare list
// clang-format off
class ItemRegistry;
class ItemRegistryRef;
// clang-format on

class ItemRegistryManager {
public:
    // ItemRegistryManager inner types declare
    // clang-format off
    class ScopedItemRegistry;
    // clang-format on

    // ItemRegistryManager inner types define
    class ScopedItemRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk7a3173;
        ::ll::UntypedStorage<8, 16> mUnk2d4641;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedItemRegistry& operator=(ScopedItemRegistry const&);
        ScopedItemRegistry(ScopedItemRegistry const&);
        ScopedItemRegistry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit ScopedItemRegistry(::std::weak_ptr<::ItemRegistry> registry);

        MCAPI explicit ScopedItemRegistry(::ItemRegistryRef registryRef);

        MCAPI void construct(::ItemRegistryRef registryRef);

        MCAPI ~ScopedItemRegistry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::weak_ptr<::ItemRegistry> registry);

        MCAPI void* $ctor(::ItemRegistryRef registryRef);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ItemRegistryRef getItemRegistry();

    MCAPI static void resetItemRegistry();

    MCAPI static void setItemRegistry(::ItemRegistryRef registryRef);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Threading::ThreadLocalObject<::std::weak_ptr<::ItemRegistry>>& mThreadLocalRegistry();
    // NOLINTEND
};
