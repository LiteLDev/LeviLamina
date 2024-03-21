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

class LadderBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    LadderBlock& operator=(LadderBlock const&);
    LadderBlock(LadderBlock const&);
    LadderBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LadderBlock@@UEAA@XZ
    virtual ~LadderBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@LadderBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 13, symbol:
    // ?getLiquidClipVolume@LadderBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 32, symbol: ?isWaterBlocking@LadderBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 51, symbol: ?sanitizeFillBlock@LadderBlock@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& sanitizeFillBlock(class Block const&) const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@LadderBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@LadderBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 84, symbol: ?mayPlace@LadderBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 92, symbol: ?neighborChanged@LadderBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@LadderBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 147, symbol: ?tick@LadderBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@LadderBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0LadderBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI LadderBlock(std::string const& nameId, int id);

    // NOLINTEND
};
