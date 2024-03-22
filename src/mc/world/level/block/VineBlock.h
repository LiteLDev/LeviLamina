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

class VineBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    VineBlock& operator=(VineBlock const&);
    VineBlock(VineBlock const&);
    VineBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VineBlock@@UEAA@XZ
    virtual ~VineBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@VineBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol: ?getOutline@VineBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@VineBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@VineBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 84, symbol: ?mayPlace@VineBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 92, symbol: ?neighborChanged@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@VineBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 120, symbol: ?getColor@VineBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 121, symbol: ?getColor@VineBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 147, symbol: ?tick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 148, symbol: ?randomTick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@VineBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 159, symbol: ?getMapColor@VineBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // symbol: ??0VineBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI VineBlock(std::string const& nameId, int id);

    // symbol: ?growDown@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void growDown(class BlockSource& region, class BlockPos const& pos, int) const;

    // symbol: ?growSideways@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void growSideways(class BlockSource& region, class BlockPos const& pos, int) const;

    // symbol: ?growUp@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void growUp(class BlockSource& region, class BlockPos const& pos, int) const;

    // symbol: ?getBlockForFace@VineBlock@@SAAEBVBlock@@E@Z
    MCAPI static class Block const& getBlockForFace(uchar face);

    // symbol: ?isAcceptableNeighbour@VineBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isAcceptableNeighbour(class Block const& block);

    // symbol: ?VINE_ALL@VineBlock@@2HB
    MCAPI static int const VINE_ALL;

    // symbol: ?VINE_EAST@VineBlock@@2HB
    MCAPI static int const VINE_EAST;

    // symbol: ?VINE_NORTH@VineBlock@@2HB
    MCAPI static int const VINE_NORTH;

    // symbol: ?VINE_SOUTH@VineBlock@@2HB
    MCAPI static int const VINE_SOUTH;

    // symbol: ?VINE_WEST@VineBlock@@2HB
    MCAPI static int const VINE_WEST;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canGrowDown@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canGrowDown(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_canGrowUp@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canGrowUp(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_canSideSpread@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canSideSpread(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_nextVineDirections@VineBlock@@AEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI int _nextVineDirections(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
