#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/actor/BlockActor.h"

class BellBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    BellBlockActor& operator=(BellBlockActor const&);
    BellBlockActor(BellBlockActor const&);
    BellBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BellBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI void ejectItem(class BlockPos const& pos, class Actor& actor) const;

    MCAPI bool isRinging() const;

    MCAPI bool
    ring(::Direction::Type direction, class BlockSource& region, class Actor* sourceActor, bool alarmNearbyDwellers);

    // NOLINTEND
};
