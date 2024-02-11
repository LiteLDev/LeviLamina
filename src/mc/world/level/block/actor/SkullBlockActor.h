#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class SkullBlockActor : public ::BlockActor {
public:
    // SkullBlockActor inner types define
    enum class SkullType {};

public:
    // prevent constructor by default
    SkullBlockActor& operator=(SkullBlockActor const&);
    SkullBlockActor(SkullBlockActor const&);
    SkullBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SkullBlockActor@@UEAA@XZ
    virtual ~SkullBlockActor() = default;

    // vIndex: 1, symbol: ?load@SkullBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@SkullBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@SkullBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@SkullBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@SkullBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@SkullBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0SkullBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SkullBlockActor(class BlockPos const& pos);

    // symbol: ?getSkullType@SkullBlockActor@@QEBA?AW4SkullType@1@XZ
    MCAPI ::SkullBlockActor::SkullType getSkullType() const;

    // symbol: ?setRotation@SkullBlockActor@@QEAAXM@Z
    MCAPI void setRotation(float rot);

    // symbol: ?setSkullType@SkullBlockActor@@QEAAXH@Z
    MCAPI void setSkullType(int type);

    // NOLINTEND
};
