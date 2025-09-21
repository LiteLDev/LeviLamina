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
    // vIndex: 0
    virtual ~HudContainerManagerModel() /*override*/ = default;

    // vIndex: 7
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    // vIndex: 8
    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    // vIndex: 9
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    // vIndex: 10
    virtual void setData(int id, int value) /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudContainerManagerModel(::ContainerID containerId, ::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCFOLD void $setData(int id, int value);

    MCAPI void $broadcastChanges();

    MCAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
