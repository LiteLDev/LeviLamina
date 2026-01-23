#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerModel;
struct PlayerContainerRefresher;
// clang-format on

class DynamicContainerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName const>           mFullContainerName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Container>>        mContainer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>          mLastSlots;
    ::ll::TypedStorage<1, 1, ::ContainerID>                        mContainerID;
    ::ll::TypedStorage<8, 152, ::ItemStack>                        mStorageItem;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicContainerManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DynamicContainerManager(
        ::FullContainerName const&          name,
        ::std::shared_ptr<::ContainerModel> model,
        ::std::shared_ptr<::Container>      container,
        ::ItemStack const&                  storageItem
    );

    MCAPI void broadcastChanges(::PlayerContainerRefresher const& refresher);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::FullContainerName const&          name,
        ::std::shared_ptr<::ContainerModel> model,
        ::std::shared_ptr<::Container>      container,
        ::ItemStack const&                  storageItem
    );
    // NOLINTEND
};
