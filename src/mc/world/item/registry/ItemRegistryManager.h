#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        MCNAPI explicit ScopedItemRegistry(::std::weak_ptr<::ItemRegistry> registry);

        MCNAPI void construct(::ItemRegistryRef registryRef);

        MCNAPI ~ScopedItemRegistry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::weak_ptr<::ItemRegistry> registry);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemRegistryRef getItemRegistry();

    MCNAPI static void setItemRegistry(::ItemRegistryRef registryRef);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::weak_ptr<::ItemRegistry>& mThreadLocalRegistry();
    // NOLINTEND
};
