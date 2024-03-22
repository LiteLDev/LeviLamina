#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TargetBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TargetBlock& operator=(TargetBlock const&);
    TargetBlock(TargetBlock const&);
    TargetBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TargetBlock@@UEAA@XZ
    virtual ~TargetBlock() = default;

    // vIndex: 17, symbol: ?onProjectileHit@TargetBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 46, symbol: ?isSignalSource@TargetBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@TargetBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@TargetBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@TargetBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@TargetBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0TargetBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TargetBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_processHitByProjectileAtPos@TargetBlock@@AEBAXAEBVVec3@@AEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    MCAPI void _processHitByProjectileAtPos(
        class Vec3 const&     hitPos,
        class BlockSource&    region,
        class BlockPos const& blockPos,
        class Actor const&    projectile
    ) const;

    // NOLINTEND
};
