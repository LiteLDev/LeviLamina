#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class MusicBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    MusicBlockActor& operator=(MusicBlockActor const&);
    MusicBlockActor(MusicBlockActor const&);
    MusicBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MusicBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    MCAPI explicit MusicBlockActor(class BlockPos const& pos);

    MCAPI void playNote(class BlockSource& region, class BlockPos const& pos);

    MCAPI void tune();

    MCAPI static std::optional<int> getInstrumentIndex(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
