#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DoublePlantBaseBlock : public ::BushBlock {
public:
    // prevent constructor by default
    DoublePlantBaseBlock& operator=(DoublePlantBaseBlock const&);
    DoublePlantBaseBlock(DoublePlantBaseBlock const&);
    DoublePlantBaseBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DoublePlantBaseBlock@@UEAA@XZ
    virtual ~DoublePlantBaseBlock() = default;

    // vIndex: 2, symbol: ?getNextBlockPermutation@DoublePlantBaseBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* getNextBlockPermutation(class Block const&) const;

    // vIndex: 5, symbol:
    // ?getCollisionShape@DoublePlantBaseBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@DoublePlantBaseBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 11, symbol: ?getVisualShape@DoublePlantBaseBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 15, symbol: ?randomlyModifyPosition@DoublePlantBaseBlock@@UEBA?AVVec3@@AEBVBlockPos@@AEAH@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos, int& seed) const;

    // vIndex: 16, symbol: ?randomlyModifyPosition@DoublePlantBaseBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 56, symbol: ?canContainLiquid@DoublePlantBaseBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 79, symbol:
    // ?onFertilized@DoublePlantBaseBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 81, symbol: ?canBeFertilized@DoublePlantBaseBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 84, symbol: ?mayPlace@DoublePlantBaseBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar) const;

    // vIndex: 85, symbol: ?mayPlace@DoublePlantBaseBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93, symbol: ?getSecondPart@DoublePlantBaseBlock@@UEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 94, symbol: ?playerWillDestroy@DoublePlantBaseBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@DoublePlantBaseBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@DoublePlantBaseBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@DoublePlantBaseBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?checkAlive@DoublePlantBaseBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void checkAlive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 165, symbol: ?_keepRelevantStateForDropping@DoublePlantBaseBlock@@MEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& _keepRelevantStateForDropping(class Block const& block) const;

    // symbol: ??0DoublePlantBaseBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DoublePlantBaseBlock(std::string const& nameId, int id);

    // NOLINTEND
};
