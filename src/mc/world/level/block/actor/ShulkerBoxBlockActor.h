#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

class ShulkerBoxBlockActor : public ::ChestBlockActor {
public:
    // prevent constructor by default
    ShulkerBoxBlockActor& operator=(ShulkerBoxBlockActor const&);
    ShulkerBoxBlockActor(ShulkerBoxBlockActor const&);
    ShulkerBoxBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI bool _detectEntityObstruction(class BlockSource&) const;

    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI bool canPushInItem(int slot, int face, class ItemStack const& item) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI class AABB getObstructionAABB() const;

    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onPlace(class BlockSource& region);

    MCVAPI void playCloseSound(class BlockSource& region);

    MCVAPI void playOpenSound(class BlockSource& region);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void startOpen(class Player& player);

    MCVAPI void stopOpen(class Player& player);

    MCVAPI void tick(class BlockSource& region);

    MCAPI ShulkerBoxBlockActor(
        ::BlockActorType       type,
        std::string const&     id,
        ::BlockActorRendererId renderId,
        class BlockPos const&  pos
    );

    MCAPI void setFacingDir(uchar facing);

    MCAPI void setupRedstoneComponent(class BlockSource& region) const;

    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const& item, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addRedstoneComponent(class BlockSource& region) const;

    MCAPI void _calculateBB();

    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource& region, class Actor* actor) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForFillingContainer();

    MCAPI static void** vftableForRandomizableBlockActorContainerBase();

    MCAPI void*
    ctor$(::BlockActorType type, std::string const& id, ::BlockActorRendererId renderId, class BlockPos const& pos);

    MCAPI bool _detectEntityObstruction$(class BlockSource&) const;

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI bool canPushInItem$(int slot, int face, class ItemStack const& item) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI std::string getName$() const;

    MCAPI class AABB getObstructionAABB$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCAPI void onPlace$(class BlockSource& region);

    MCAPI void playCloseSound$(class BlockSource& region);

    MCAPI void playOpenSound$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void startOpen$(class Player& player);

    MCAPI void stopOpen$(class Player& player);

    MCAPI void tick$(class BlockSource& region);

    MCAPI static int const& ITEMS_SIZE();

    // NOLINTEND
};
