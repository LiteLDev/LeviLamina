#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CreativeGroupInfo;
class CreativeItemRegistry;
class ItemInstance;
class ItemRegistryRef;
// clang-format on

class CreativeItemInitializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd28e76;
    ::ll::UntypedStorage<8, 24> mUnk270cf8;
    ::ll::UntypedStorage<8, 16> mUnkbbebb3;
    ::ll::UntypedStorage<1, 1>  mUnk222f5d;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemInitializer& operator=(CreativeItemInitializer const&);
    CreativeItemInitializer(CreativeItemInitializer const&);
    CreativeItemInitializer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeItemInitializer(
        bool                                                  isClient,
        ::ItemRegistryRef const&                              itemRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> creativeItemRegistry
    );

    MCAPI void _addCreativeItemServer(::CreativeItemCategory creativeItemCategory, ::ItemInstance const& itemInstance);

    MCAPI void _addLooseCreativeItemsClient();

    MCAPI void addCreativeItem(
        ::CreativeItemCategory creativeItemCategory,
        ::CreativeGroupInfo&   creativeGroupInfo,
        ::ItemInstance const&  itemInstance
    );

    MCAPI void addLooseCreativeItems(::BaseGameVersion const& worldVersion);

    MCAPI ~CreativeItemInitializer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        bool                                                  isClient,
        ::ItemRegistryRef const&                              itemRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> creativeItemRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
