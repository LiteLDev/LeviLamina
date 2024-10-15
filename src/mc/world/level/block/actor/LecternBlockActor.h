#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LecternBlockActor {
public:
    // prevent constructor by default
    LecternBlockActor& operator=(LecternBlockActor const&);
    LecternBlockActor(LecternBlockActor const&);
    LecternBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

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

    MCAPI explicit LecternBlockActor(class BlockPos const& pos);

    MCAPI void dropBook(class BlockSource& region);

    MCAPI int getPage() const;

    MCAPI int getTotalPages() const;

    MCAPI bool hasBook() const;

    MCAPI void setItemFromBlock(int slot, class ItemStack const& item);

    MCAPI void setPageOnServer(int page, class BlockSource& region);

    MCAPI void setTotalPages(int page);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCAPI static void** $vftableForContainer();

    MCAPI void* ctor$(class BlockPos const& pos);

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource& region);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI class Container* getContainer$();

    MCAPI class Container const* getContainer$() const;

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void startOpen$(class Player&);

    MCAPI void stopOpen$(class Player&);

    // NOLINTEND
};
