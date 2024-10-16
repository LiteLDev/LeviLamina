#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerType.h"

class HopperBlockActor {
public:
    // prevent constructor by default
    HopperBlockActor& operator=(HopperBlockActor const&);
    HopperBlockActor(HopperBlockActor const&);
    HopperBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource&);

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onMove();

    MCVAPI void onNeighborChanged(class BlockSource& region, class BlockPos const&);

    MCVAPI void onRemoved(class BlockSource&);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setContainerChanged(int slot);

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player&);

    MCVAPI void stopOpen(class Player&);

    MCVAPI void tick(class BlockSource& region);

    MCAPI explicit HopperBlockActor(class BlockPos const& pos);

    MCAPI void checkForSmeltEverythingAchievement(class BlockSource& region);

    MCAPI class FurnaceBlockActor* getAttachedFurnace(class BlockSource& region);

    MCAPI bool isAttachedToChestAndFurnace(class BlockSource& region);

    MCAPI void updateCooldownAfterMove(struct Tick const& currentTick, int time);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _ensureTickingOrder(class BlockSource& region, int maxRecursion);

    MCAPI void _tick(class BlockSource& region, int maxRecursion);

    MCAPI bool isAttachedToContainerType(class BlockSource& region, ::ContainerType containerType);

    MCAPI bool isSourceOfContainerType(class BlockSource& region, ::ContainerType containerType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBlockActor();

    MCAPI static void** vftableForContainer();

    MCAPI void* ctor$(class BlockPos const& pos);

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource&);

    MCAPI class Container* getContainer$();

    MCAPI class Container const* getContainer$() const;

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI std::string getName$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void onMove$();

    MCAPI void onNeighborChanged$(class BlockSource& region, class BlockPos const&);

    MCAPI void onRemoved$(class BlockSource&);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setContainerChanged$(int slot);

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void startOpen$(class Player&);

    MCAPI void stopOpen$(class Player&);

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
