#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class LodestoneBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    LodestoneBlockActor& operator=(LodestoneBlockActor const&);
    LodestoneBlockActor(LodestoneBlockActor const&);
    LodestoneBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LodestoneBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 13
    virtual void onRemoved(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit LodestoneBlockActor(class BlockPos const& pos);

    MCAPI class PositionTrackingId const& getTrackingHandle() const;

    MCAPI bool hasTrackingHandle() const;

    MCAPI bool setTrackingHandle(class PositionTrackingId const& h);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const sTagName_Handle;

    // NOLINTEND
};
