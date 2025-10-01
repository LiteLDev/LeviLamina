#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CreativeGroupInfo;
class CreativeItemRegistry;
class ItemInstance;
class ItemRegistryRef;
struct BlockDefinition;
// clang-format on

class CreativeItemInitializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd28e76;
    ::ll::UntypedStorage<8, 24> mUnk270cf8;
    ::ll::UntypedStorage<8, 16> mUnkbbebb3;
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
