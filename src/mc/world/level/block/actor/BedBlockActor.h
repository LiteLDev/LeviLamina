#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class BedBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    BedBlockActor& operator=(BedBlockActor const&);
    BedBlockActor(BedBlockActor const&);
    BedBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BedBlockActor@@UEAA@XZ
    virtual ~BedBlockActor() = default;

    // vIndex: 1, symbol: ?load@BedBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@BedBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 3, symbol: ?saveItemInstanceData@BedBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool saveItemInstanceData(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 11, symbol: ?onPlace@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onPlace(class BlockSource& region);

    // vIndex: 21, symbol: ?getCrackEntity@BedBlockActor@@UEAAPEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual class BlockActor* getCrackEntity(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 26, symbol:
    // ?getName@BedBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@BedBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@BedBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0BedBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit BedBlockActor(class BlockPos const& pos);

    // symbol: ?claimPetSleepOnBed@BedBlockActor@@QEAA_NUActorUniqueID@@@Z
    MCAPI bool claimPetSleepOnBed(struct ActorUniqueID petId);

    // symbol: ?startSleepingOn@BedBlockActor@@QEAAXXZ
    MCAPI void startSleepingOn();

    // symbol: ?stopSleepingOn@BedBlockActor@@QEAAXAEAVBlockSource@@_N@Z
    MCAPI void stopSleepingOn(class BlockSource& region, bool forcefulAwake);

    // NOLINTEND
};
