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
    // vIndex: 0, symbol: __gen_??1CampfireBlockActor@@UEAA@XZ
    virtual ~CampfireBlockActor() = default;

    // vIndex: 1, symbol: ?load@CampfireBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@CampfireBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@CampfireBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@CampfireBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 19, symbol: ?getShadowRadius@CampfireBlockActor@@UEBAMAEAVBlockSource@@@Z
    virtual float getShadowRadius(class BlockSource& region) const;

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@CampfireBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@CampfireBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?dropAllItems@CampfireBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void dropAllItems(class BlockSource& region);

    // symbol: ?getCampfireTag@CampfireBlockActor@@QEBAAEBVHashedString@@AEBVBlockSource@@@Z
    MCAPI class HashedString const& getCampfireTag(class BlockSource const& region) const;

    // symbol: ?getCookingItem@CampfireBlockActor@@QEAAAEBVItemInstance@@H@Z
    MCAPI class ItemInstance const& getCookingItem(int slot);

    // symbol: ?setItem@CampfireBlockActor@@QEAA_NAEAVBlockSource@@AEBVItemInstance@@@Z
    MCAPI bool setItem(class BlockSource& region, class ItemInstance const& item);

    // symbol: ?MAX_SMOKE_THRESHOLD_COUNTER@CampfireBlockActor@@2HB
    MCAPI static int const MAX_SMOKE_THRESHOLD_COUNTER;

    // symbol: ?MIN_SMOKE_THRESHOLD_COUNTER@CampfireBlockActor@@2HB
    MCAPI static int const MIN_SMOKE_THRESHOLD_COUNTER;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_finishCooking@CampfireBlockActor@@AEAAXAEAVBlockSource@@H@Z
    MCAPI void _finishCooking(class BlockSource& region, int slot);

    // NOLINTEND
};
