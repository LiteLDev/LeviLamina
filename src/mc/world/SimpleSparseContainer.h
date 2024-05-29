#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SparseContainerBackingSetType.h"

class SimpleSparseContainer {
public:
    // prevent constructor by default
    SimpleSparseContainer& operator=(SimpleSparseContainer const&);
    SimpleSparseContainer(SimpleSparseContainer const&);
    SimpleSparseContainer();

public:
    // NOLINTBEGIN
    // symbol: ?containerContentChanged@SimpleSparseContainer@@EEAAXH@Z
    MCVAPI void containerContentChanged(int slot);

    // symbol: ?getContainerSize@SimpleSparseContainer@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@SimpleSparseContainer@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@SimpleSparseContainer@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?serverInitItemStackIds@SimpleSparseContainer@@EEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setItem@SimpleSparseContainer@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@SimpleSparseContainer@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& player);

    // symbol: ?stopOpen@SimpleSparseContainer@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player& player);

    // symbol:
    // ??0SimpleSparseContainer@@QEAA@AEAVContainer@@W4SparseContainerBackingSetType@@V?$unique_ptr@VISparseContainerSetListener@@U?$default_delete@VISparseContainerSetListener@@@std@@@std@@V?$unique_ptr@VIPlayerContainerSetter@@U?$default_delete@VIPlayerContainerSetter@@@std@@@4@@Z
    MCAPI
    SimpleSparseContainer(class Container& backingContainer, ::SparseContainerBackingSetType backingSetType, std::unique_ptr<class ISparseContainerSetListener>, std::unique_ptr<class IPlayerContainerSetter>);

    // symbol: ?clearItem@SimpleSparseContainer@@QEAAXH@Z
    MCAPI void clearItem(int slot);

    // symbol: ?pushAllToBackingContainer@SimpleSparseContainer@@QEAAXXZ
    MCAPI void pushAllToBackingContainer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setBackingContainerSlot@SimpleSparseContainer@@AEAAXHAEBVItemStack@@@Z
    MCAPI void _setBackingContainerSlot(int slot, class ItemStack const& newItem);

    // NOLINTEND
};
