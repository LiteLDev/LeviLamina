#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerType.h"

class SimpleContainer : public ::Container {
public:
    // prevent constructor by default
    SimpleContainer& operator=(SimpleContainer const&);
    SimpleContainer(SimpleContainer const&);
    SimpleContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleContainer();

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // vIndex: 7
    virtual class ItemStack const& getItem(int slot) const;

    // vIndex: 12
    virtual void setItem(int slot, class ItemStack const& item);

    // vIndex: 20
    virtual int getContainerSize() const;

    // vIndex: 21
    virtual int getMaxStackSize() const;

    // vIndex: 22
    virtual void startOpen(class Player&);

    // vIndex: 23
    virtual void stopOpen(class Player&);

    MCAPI SimpleContainer(std::string const& name, bool customName, int size, ::ContainerType containerType);

    // NOLINTEND
};
