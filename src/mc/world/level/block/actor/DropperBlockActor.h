#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/DispenserBlockActor.h"

class DropperBlockActor : public ::DispenserBlockActor {
public:
    // prevent constructor by default
    DropperBlockActor& operator=(DropperBlockActor const&);
    DropperBlockActor(DropperBlockActor const&);
    DropperBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI std::string getName() const;

    MCAPI explicit DropperBlockActor(class BlockPos pos);

    MCAPI bool pushOutItems(class BlockSource& region);

    MCAPI static bool
    addItemsToContainerAndDepleteStack(class Container& container, class ItemStack& item, int stackSizeLimit, int face);

    MCAPI static class Container* getContainerAt(class BlockSource& region, class Vec3 const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource& region);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI std::string getName$() const;

    // NOLINTEND
};
