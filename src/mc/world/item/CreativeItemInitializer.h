#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CreativeGroupInfo;
class CreativeItemRegistry;
class ItemInstance;
struct BlockDefinition;
// clang-format on

class CreativeItemInitializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>                                     mItemRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> const> mCreativeItemRegistry;
    ::ll::TypedStorage<8, 16, ::std::set<short>> mServerItemsUsedInCreativeItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemInitializer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeItemInitializer(
        ::ItemRegistryRef const&                              itemRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> creativeItemRegistry
    );

    MCAPI void _addCreativeItemServer(::CreativeGroupInfo& creativeGroupInfo, ::ItemInstance const& itemInstance);

    MCAPI void _addLooseCreativeItem(::ItemInstance const& itemInstance);

    MCAPI void _addLooseCreativeItemsServer(::BaseGameVersion const& worldVersion);

    MCAPI void addLooseBlocks(::std::vector<::BlockDefinition const*> const& blockDefinitions);

    MCAPI ~CreativeItemInitializer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
