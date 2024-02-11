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
    // vIndex: 0, symbol: __gen_??1MusicBlockActor@@UEAA@XZ
    virtual ~MusicBlockActor() = default;

    // vIndex: 1, symbol: ?load@MusicBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@MusicBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // symbol: ??0MusicBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit MusicBlockActor(class BlockPos const& pos);

    // symbol: ?playNote@MusicBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void playNote(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?tune@MusicBlockActor@@QEAAXXZ
    MCAPI void tune();

    // symbol: ?getInstrumentIndex@MusicBlockActor@@SA?AV?$optional@H@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<int> getInstrumentIndex(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
