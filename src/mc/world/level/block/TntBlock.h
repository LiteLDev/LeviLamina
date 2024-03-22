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

class TntBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TntBlock& operator=(TntBlock const&);
    TntBlock(TntBlock const&);
    TntBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TntBlock@@UEAA@XZ
    virtual ~TntBlock() = default;

    // vIndex: 62, symbol: ?shouldDispense@TntBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@@Z
    virtual bool shouldDispense(class BlockSource& region, class Container& container) const;

    // vIndex: 63, symbol: ?dispense@TntBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 90, symbol: ?destroy@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual void
    destroy(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Actor* entitySource)
        const;

    // vIndex: 96, symbol:
    // ?trySpawnResourcesOnExplosion@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@M@Z
    virtual void
    trySpawnResourcesOnExplosion(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, float)
        const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@TntBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@TntBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 128, symbol: ?getVariant@TntBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 143, symbol: ?onExploded@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // vIndex: 145, symbol: ?onPlace@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 151, symbol: ?use@TntBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0TntBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TntBlock(std::string const& nameId, int id);

    // symbol: ?_setAllowUnderwater@TntBlock@@QEBAXPEAVActor@@@Z
    MCAPI void _setAllowUnderwater(class Actor* e) const;

    // symbol: ?_shouldAllowUnderwater@TntBlock@@QEBA_NAEBVBlock@@@Z
    MCAPI bool _shouldAllowUnderwater(class Block const& block) const;

    // symbol: ?tryLightTnt@TntBlock@@SA_NAEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI static bool tryLightTnt(class Player& player, class BlockPos const& pos);

    // NOLINTEND
};
