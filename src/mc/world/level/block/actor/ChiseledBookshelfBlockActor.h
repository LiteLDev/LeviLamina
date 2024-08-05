#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChiseledBookshelfBlockActor {
public:
    // prevent constructor by default
    ChiseledBookshelfBlockActor& operator=(ChiseledBookshelfBlockActor const&);
    ChiseledBookshelfBlockActor(ChiseledBookshelfBlockActor const&);
    ChiseledBookshelfBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI bool addItemToFirstEmptySlot(class ItemStack const& item);

    MCVAPI bool canPullOutItem(int slot, int, class ItemStack const&) const;

    MCVAPI bool canPushInItem(int slot, int, class ItemStack const& item) const;

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI bool isEmpty() const;

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onChanged(class BlockSource& region);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player&);

    MCVAPI void stopOpen(class Player&);

    MCAPI explicit ChiseledBookshelfBlockActor(class BlockPos const& pos);

    MCAPI uint getLastInteractedSlot() const;

    MCAPI class ItemStack retrieveBook(int slot);

    MCAPI static bool allowedItem(class ItemStack const& item);

    MCAPI static class ChiseledBookshelfBlockActor* tryGet(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI uint _numberOfBooksStored() const;

    MCAPI void _setItemInternal(int, class ItemStack const&, bool);

    // NOLINTEND
};
