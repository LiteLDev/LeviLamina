#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStack;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class HudContainerManagerModel : public ::ContainerManagerModel {
public:
    // HudContainerManagerModel inner types define
    using DynamicContainerRemovalPublisher = ::Bedrock::PubSub::
        Publisher<void(::std::vector<::std::string> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>;

    using ItemStackVector = ::std::vector<::ItemStack>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mLastSlots;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::std::vector<::std::string> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnDynamicContainerRemovalPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudContainerManagerModel() /*override*/ = default;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int id, int value) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HudContainerManagerModel(::ContainerID containerId, ::Player& player);

#ifdef LL_PLAT_C
    MCNAPI void cleanUpDynamicContainers();

    MCNAPI void refreshHotbar();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID containerId, ::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCNAPI ::ItemStack const& $getSlot(int slot) const;

    MCNAPI void $setData(int id, int value);

    MCNAPI void $broadcastChanges();

    MCNAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
