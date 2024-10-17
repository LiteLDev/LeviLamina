#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ChemistryTableType.h"

class ChemistryTableBlockActor {
public:
    // prevent constructor by default
    ChemistryTableBlockActor& operator=(ChemistryTableBlockActor const&);
    ChemistryTableBlockActor(ChemistryTableBlockActor const&);
    ChemistryTableBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onRemoved(class BlockSource& region);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player& p);

    MCVAPI void stopOpen(class Player& p);

    MCVAPI void tick(class BlockSource& region);

    MCAPI bool isSameType(::ChemistryTableType type) const;

    MCAPI void playerOpenLabTable(class Player& player);

    MCAPI void reset(class BlockSource& region);

    MCAPI void serverCombine(class BlockSource& region, std::vector<class ItemStack> const& consumedInput);

    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const& packet, class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<class LabTableReaction>
          _createReaction(class Random& random, std::vector<class ItemStack> const& consumedInput);

    MCAPI void _popPendingReactionOutput(class BlockSource& region);

    MCAPI ::ChemistryTableType _updateType(class BlockSource& region);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBlockActor();

    MCAPI static void** vftableForContainer();

    MCAPI class Container* getContainer$();

    MCAPI class Container const* getContainer$() const;

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void onRemoved$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void startOpen$(class Player& p);

    MCAPI void stopOpen$(class Player& p);

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
