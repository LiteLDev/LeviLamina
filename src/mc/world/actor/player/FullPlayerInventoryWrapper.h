#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

class FullPlayerInventoryWrapper {
public:
    // prevent constructor by default
    FullPlayerInventoryWrapper& operator=(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper(FullPlayerInventoryWrapper const&);
    FullPlayerInventoryWrapper();

public:
    // NOLINTBEGIN
    MCAPI explicit FullPlayerInventoryWrapper(class Player& player);

    MCAPI int clearAllItems();

    MCAPI int getItemCount(std::function<bool(class ItemStack const&)> comparator);

    MCAPI int removeResource(
        class ItemStack const&                      sourceItem,
        std::function<bool(class ItemStack const&)> comparator,
        bool                                        requireExactAux,
        int                                         maxCount
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int _clearSimpleContainerItem(class SimpleContainer& container, ::ContainerID containerId, int slot);

    MCAPI int _getSimpleContainerItemCount(
        class SimpleContainer&                      container,
        int                                         slot,
        std::function<bool(class ItemStack const&)> comparator
    );

    MCAPI int _removeCursorItem(class ItemStack const& item, bool requireExactAux, int maxCount);

    MCAPI int _removeSimpleContainerItem(
        class SimpleContainer& container,
        ::ContainerID          containerId,
        int                    slot,
        class ItemStack const& sourceItem,
        bool                   requireExactAux,
        int                    maxCount
    );

    MCAPI void _sendCursorSlotPacket() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
