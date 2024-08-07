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

    MCVAPI void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);

    MCVAPI void setItem(int, class ItemStack const&);

    MCVAPI void tick(class BlockSource&);

    MCAPI explicit DecoratedPotBlockActor(class BlockPos const& pos);

    MCAPI std::array<std::string, 4> const& getSherdNames() const;

    MCAPI void tryAddItem(class Player&);

    MCAPI static void removeDefaultSherdsFromUserData(class ItemStackBase&);

    MCAPI static void saveSherdsToTag(class CompoundTag&, std::array<std::string, 4> const&, bool);

    MCAPI static class DecoratedPotBlockActor* tryGet(class BlockSource& region, class BlockPos const& pos);

    MCAPI static std::optional<std::array<std::string, 4>> tryGetSherdsFromTag(class CompoundTag const&);

    MCAPI static std::array<std::string, 4> const DEFAULT_SHERD_LIST;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onInsertFeedback(class BlockSource&, class ItemStack const&, class Player&);

    MCAPI void _resetSherdItemNames();

    MCAPI void _setContainedItem(class ItemStack const&);

    MCAPI static bool _areDefaultSherds(std::array<std::string, 4> const&);

    MCAPI static std::optional<std::array<std::string, 4>> _tryGetSherdsFromItem(class ItemStackBase const&);

    // NOLINTEND
};
