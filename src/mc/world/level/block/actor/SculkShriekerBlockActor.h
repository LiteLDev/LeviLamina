#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class SculkShriekerBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    SculkShriekerBlockActor& operator=(SculkShriekerBlockActor const&);
    SculkShriekerBlockActor(SculkShriekerBlockActor const&);
    SculkShriekerBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SculkShriekerBlockActor@@UEAA@XZ
    virtual ~SculkShriekerBlockActor() = default;

    // vIndex: 1, symbol: ?load@SculkShriekerBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@SculkShriekerBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 13, symbol: ?onRemoved@SculkShriekerBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource& region);

    // symbol: ??0SculkShriekerBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SculkShriekerBlockActor(class BlockPos const& pos);

    // symbol: ?tryRespond@SculkShriekerBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void tryRespond(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?tryShriek@SculkShriekerBlockActor@@QEAA_NAEAVBlockSource@@VBlockPos@@AEAVPlayer@@@Z
    MCAPI bool tryShriek(class BlockSource& region, class BlockPos pos, class Player&);

    // symbol: ?tryGet@SculkShriekerBlockActor@@SAPEAV1@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI static class SculkShriekerBlockActor* tryGet(class BlockSource& region, class BlockPos blockPos);

    // symbol: ?tryGetPlayerInHierarchy@SculkShriekerBlockActor@@SAPEAVPlayer@@PEAVActor@@@Z
    MCAPI static class Player* tryGetPlayerInHierarchy(class Actor* actor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canRespond@SculkShriekerBlockActor@@CA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _canRespond(class BlockSource const& region, class BlockPos const& pos);

    // NOLINTEND
};
