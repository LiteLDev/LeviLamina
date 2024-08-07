#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class SculkSensorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    SculkSensorBlockActor& operator=(SculkSensorBlockActor const&);
    SculkSensorBlockActor(SculkSensorBlockActor const&);
    SculkSensorBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkSensorBlockActor();

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 13
    virtual void onRemoved(class BlockSource& region);

    MCAPI explicit SculkSensorBlockActor(class BlockPos const& pos);

    MCAPI
    SculkSensorBlockActor(::BlockActorType type, class BlockPos const& pos, std::string const& id, uint, std::unique_ptr<class SculkSensorVibrationConfig>&&);

    MCAPI int getLatestReceivedVibrationFrequency() const;

    // NOLINTEND
};
