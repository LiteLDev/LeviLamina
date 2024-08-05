#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/states/BlockStateVariant.h"
#include "mc/world/level/block/utils/BlockActorType.h"

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
    virtual float getShadowRadius(class BlockSource& region) const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit ItemFrameBlockActor(class BlockPos pos);

    MCAPI ItemFrameBlockActor(class BlockPos pos, ::BlockActorType type, std::string const& id);

    MCAPI void actuallyDropItem(class BlockSource&, bool, class Actor*);

    MCAPI void dropFramedItem(class BlockSource&, bool, class Actor*);

    MCAPI class ItemInstance const& getFramedItem() const;

    MCAPI float getRotation();

    MCAPI void rotateFramedItem(class BlockSource&, class Actor&);

    MCAPI void setItem(class BlockSource&, class ItemInstance const&, class Actor*);

    MCAPI void updateNameTag();

    MCAPI static float const ROTATION_DEGREES;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _checkMapRemoval(class BlockSource& region, class ItemInstance& item);

    MCAPI void
    _updateBit(class BlockSource& region, class BlockStateVariant<bool> const&, class HashedString const& itemName);

    // NOLINTEND
};
