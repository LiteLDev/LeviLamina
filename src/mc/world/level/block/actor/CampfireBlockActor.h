#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class CampfireBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    CampfireBlockActor& operator=(CampfireBlockActor const&);
    CampfireBlockActor(CampfireBlockActor const&);
    CampfireBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CampfireBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 19
    virtual float getShadowRadius(class BlockSource& region) const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI void dropAllItems(class BlockSource& region);

    MCAPI class HashedString const& getCampfireTag(class BlockSource const& region) const;

    MCAPI class ItemInstance const& getCookingItem(int slot);

    MCAPI bool setItem(class BlockSource& region, class ItemInstance const& item);

    MCAPI static int const MAX_SMOKE_THRESHOLD_COUNTER;

    MCAPI static int const MIN_SMOKE_THRESHOLD_COUNTER;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _finishCooking(class BlockSource& region, int slot);

    // NOLINTEND
};
