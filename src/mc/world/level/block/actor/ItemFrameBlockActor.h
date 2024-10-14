#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/states/BlockStateVariant.h"

class ItemFrameBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    ItemFrameBlockActor& operator=(ItemFrameBlockActor const&);
    ItemFrameBlockActor(ItemFrameBlockActor const&);
    ItemFrameBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemFrameBlockActor();

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 13
    virtual void onRemoved(class BlockSource& region);

    // vIndex: 19
    virtual float getShadowRadius(class BlockSource&) const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit ItemFrameBlockActor(class BlockPos pos);

    MCAPI ItemFrameBlockActor(class BlockPos pos, ::BlockActorType type, std::string const& id);

    MCAPI void actuallyDropItem(class BlockSource& region, bool dropItem, class Actor* entitySource);

    MCAPI void dropFramedItem(class BlockSource& region, bool dropItem, class Actor* entitySource);

    MCAPI class ItemInstance const& getFramedItem() const;

    MCAPI float getRotation();

    MCAPI void rotateFramedItem(class BlockSource& region, class Actor& entitySource);

    MCAPI void setItem(class BlockSource& region, class ItemInstance const& item, class Actor* entitySource);

    MCAPI void updateNameTag();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _checkMapRemoval(class BlockSource& region, class ItemInstance& item);

    MCAPI void _updateBit(
        class BlockSource&                   region,
        class BlockStateVariant<bool> const& vanillaState,
        class HashedString const&            itemName
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI float getShadowRadius$(class BlockSource&) const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI void onRemoved$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void tick$(class BlockSource& region);

    MCAPI static float const& ROTATION_DEGREES();

    // NOLINTEND
};
