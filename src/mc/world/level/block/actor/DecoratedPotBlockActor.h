#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

class DecoratedPotBlockActor : public ::RandomizableBlockActorContainer {
public:
    // prevent constructor by default
    DecoratedPotBlockActor& operator=(DecoratedPotBlockActor const&);
    DecoratedPotBlockActor(DecoratedPotBlockActor const&);
    DecoratedPotBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void
    serverInitItemStackIds(int containerSlot, int, std::function<void(int, class ItemStack const&)> onNetIdChanged);

    MCVAPI void setItem(int, class ItemStack const& item);

    MCVAPI void tick(class BlockSource& region);

    MCAPI explicit DecoratedPotBlockActor(class BlockPos const& pos);

    MCAPI std::array<std::string, 4> const& getSherdNames() const;

    MCAPI void tryAddItem(class Player& player);

    MCAPI static void removeDefaultSherdsFromUserData(class ItemStackBase& itemInstance);

    MCAPI static void
    saveSherdsToTag(class CompoundTag& tag, std::array<std::string, 4> const& sherds, bool forceSaveDefaultSherds);

    MCAPI static class DecoratedPotBlockActor* tryGet(class BlockSource& region, class BlockPos const& pos);

    MCAPI static std::optional<std::array<std::string, 4>> tryGetSherdsFromTag(class CompoundTag const& tag);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _onInsertFeedback(class BlockSource& region, class ItemStack const& newContainedItem, class Player& player);

    MCAPI void _resetSherdItemNames();

    MCAPI void _setContainedItem(class ItemStack const& item);

    MCAPI static bool _areDefaultSherds(std::array<std::string, 4> const& sherds);

    MCAPI static std::optional<std::array<std::string, 4>> _tryGetSherdsFromItem(class ItemStackBase const& item);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForContainer();

    MCAPI static void** vftableForRandomizableBlockActorContainerBase();

    MCAPI void* ctor$(class BlockPos const& pos);

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void
    serverInitItemStackIds$(int containerSlot, int, std::function<void(int, class ItemStack const&)> onNetIdChanged);

    MCAPI void setItem$(int, class ItemStack const& item);

    MCAPI void tick$(class BlockSource& region);

    MCAPI static std::array<std::string, 4> const& DEFAULT_SHERD_LIST();

    // NOLINTEND
};
