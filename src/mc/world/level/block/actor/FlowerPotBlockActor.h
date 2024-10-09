#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class FlowerPotBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    FlowerPotBlockActor& operator=(FlowerPotBlockActor const&);
    FlowerPotBlockActor(FlowerPotBlockActor const&);
    FlowerPotBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlowerPotBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit FlowerPotBlockActor(class BlockPos const& pos);

    MCAPI class Block const* getPlantItem() const;

    MCAPI void setPlantItem(class Block const* plant);

    // NOLINTEND
};
