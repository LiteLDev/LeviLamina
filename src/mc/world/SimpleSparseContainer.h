#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

class SimpleSparseContainer {
public:
    // prevent constructor by default
    SimpleSparseContainer& operator=(SimpleSparseContainer const&);
    SimpleSparseContainer(SimpleSparseContainer const&);
    SimpleSparseContainer();

public:
    // NOLINTBEGIN
    MCVAPI void containerContentChanged(int slot);

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player& player);

    MCVAPI void stopOpen(class Player& player);

    MCAPI SimpleSparseContainer(
        class Container&                                   backingContainer,
        ::SparseContainerBackingSetType                    backingSetType,
        std::unique_ptr<class ISparseContainerSetListener> sparseContainerSetListener,
        std::unique_ptr<class IPlayerContainerSetter>      playerSetter
    );

    MCAPI void clearItem(int slot);

    MCAPI void pushAllToBackingContainer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setBackingContainerSlot(int slot, class ItemStack const& newItem);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainer();

    MCAPI static void** $vftableForContainerContentChangeListener();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void containerContentChanged$(int slot);

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void startOpen$(class Player& player);

    MCAPI void stopOpen$(class Player& player);

    // NOLINTEND
};
