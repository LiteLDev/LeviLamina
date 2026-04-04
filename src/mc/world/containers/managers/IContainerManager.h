#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct FullContainerName;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class IContainerManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContainerManager();

    virtual ::ContainerID getContainerId() const = 0;

    virtual void setContainerId(::ContainerID id) = 0;

    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const = 0;

    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) = 0;

    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const = 0;

    virtual void serverInitItemStackIds() = 0;

    virtual ::std::vector<::ItemStack> getItemCopies() const = 0;

    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) = 0;

    virtual ::ItemStack const& getSlot(int slot) const = 0;

    virtual void setData(int id, int value) = 0;

    virtual void setFullContainerSlot(int, ::FullContainerName const&, ::ItemStack const&, bool) = 0;

    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const = 0;

    virtual void broadcastChanges() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
