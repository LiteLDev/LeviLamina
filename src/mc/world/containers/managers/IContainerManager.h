#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class IContainerManager {
public:
    // prevent constructor by default
    IContainerManager& operator=(IContainerManager const&);
    IContainerManager(IContainerManager const&);
    IContainerManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContainerManager();

    // vIndex: 1
    virtual ::ContainerID getContainerId() const = 0;

    // vIndex: 2
    virtual void setContainerId(::ContainerID id) = 0;

    // vIndex: 3
    virtual ::ContainerType getContainerType() const = 0;

    // vIndex: 4
    virtual void setContainerType(::ContainerType type) = 0;

    // vIndex: 5
    virtual void serverInitItemStackIds() = 0;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const = 0;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork) = 0;

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const = 0;

    // vIndex: 9
    virtual void setData(int id, int value) = 0;

    // vIndex: 10
    virtual void broadcastChanges() = 0;

    // NOLINTEND
};
