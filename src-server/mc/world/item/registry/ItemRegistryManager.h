#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class ItemRegistry;
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
        ::ll::TypedStorage<1, 1, bool> mIsSet;
        ::ll::TypedStorage<8, 16, ::ItemRegistryRef> mPreviousRegistry;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ScopedItemRegistry();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit ScopedItemRegistry(::std::weak_ptr<::ItemRegistry> registry);
    
        MCAPI void construct(::ItemRegistryRef registryRef);
    
        MCAPI ~ScopedItemRegistry();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::weak_ptr<::ItemRegistry> registry);
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

    MCAPI static void setItemRegistry(::ItemRegistryRef registryRef);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::weak_ptr<::ItemRegistry>& mThreadLocalRegistry();
    // NOLINTEND

};
