#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

class SparseContainer {
public:
    // prevent constructor by default
    SparseContainer& operator=(SparseContainer const&);
    SparseContainer(SparseContainer const&);
    SparseContainer();

public:
    // NOLINTBEGIN
    MCAPI void addItemNetworkChangedCallback(
        ::ContainerEnumName                                                      name,
        std::function<void(int, class ItemStack const&, class ItemStack const&)> itemNetworkChangedCallback
    );

    MCAPI bool isUsingLegacyScreenTransactions() const;

    MCAPI void removeItemNetworkChangedCallback(::ContainerEnumName name);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _onItemNetworkChanged(int slot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI void _setBackingContainerSlot(int slot, class ItemStack const& newItem);

    // NOLINTEND
};
