#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class DispenserBlockActor : public ::RandomizableBlockActorContainer {
public:
    // prevent constructor by default
    DispenserBlockActor& operator=(DispenserBlockActor const&);
    DispenserBlockActor(DispenserBlockActor const&);
    DispenserBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onMove();

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player& player);

    MCVAPI void stopOpen(class Player&);

    MCAPI explicit DispenserBlockActor(class BlockPos pos);

    MCAPI DispenserBlockActor(class BlockPos pos, ::BlockActorType type);

    MCAPI int getRandomSlot(class Random& random);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void initItems();

    // NOLINTEND
};
