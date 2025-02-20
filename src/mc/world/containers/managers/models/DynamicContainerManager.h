#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerModel;
class ItemStack;
struct FullContainerName;
struct PlayerContainerRefresher;
// clang-format on

class DynamicContainerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnkaed41d;
    ::ll::UntypedStorage<8, 16>  mUnkf03e6c;
    ::ll::UntypedStorage<8, 16>  mUnk18ae91;
    ::ll::UntypedStorage<8, 24>  mUnk6e971f;
    ::ll::UntypedStorage<1, 1>   mUnk73167d;
    ::ll::UntypedStorage<8, 152> mUnk66980f;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicContainerManager& operator=(DynamicContainerManager const&);
    DynamicContainerManager(DynamicContainerManager const&);
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

    MCAPI ~DynamicContainerManager();
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
