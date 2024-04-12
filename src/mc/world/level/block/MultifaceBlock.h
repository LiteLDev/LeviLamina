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

class MultifaceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MultifaceBlock& operator=(MultifaceBlock const&);
    MultifaceBlock(MultifaceBlock const&);
    MultifaceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MultifaceBlock@@UEAA@XZ
    virtual ~MultifaceBlock() = default;

    // vIndex: 4, symbol:
    // ?clip@MultifaceBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5, symbol:
    // ?getCollisionShape@MultifaceBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@MultifaceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@MultifaceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 32, symbol: ?isWaterBlocking@MultifaceBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 45, symbol: ?isMultifaceBlock@MultifaceBlock@@UEBA_NXZ
    virtual bool isMultifaceBlock() const;

    // vIndex: 51, symbol: ?sanitizeFillBlock@MultifaceBlock@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& sanitizeFillBlock(class Block const&) const;

    // vIndex: 84, symbol: ?mayPlace@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 92, symbol: ?neighborChanged@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@MultifaceBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 147, symbol: ?tick@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getMultifaceBlock@GlowLichenBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getMultifaceBlock() const = 0;

    // vIndex: 164, symbol: ?getMultifaceSpreader@GlowLichenBlock@@UEBAAEBVMultifaceSpreader@@XZ
    virtual class MultifaceSpreader const& getMultifaceSpreader() const = 0;

    // symbol:
    // ??0MultifaceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI MultifaceBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?removeFace@MultifaceBlock@@QEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@E_N@Z
    MCAPI void removeFace(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class Block const&       block,
        class BlockPos const&    pos,
        uchar,
        bool
    ) const;

    // symbol: ?_getNumSides@MultifaceBlock@@SAHAEBVBlock@@@Z
    MCAPI static int _getNumSides(class Block const&);

    // symbol: ?convertOldMultifaceToNewMultifaceValue@MultifaceBlock@@SAHH@Z
    MCAPI static int convertOldMultifaceToNewMultifaceValue(int);

    // symbol: ?getBlockForPlacement@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI static class Block const& getBlockForPlacement(
        class Block const&    oldBlock,
        class Block const&    placementBlock,
        class BlockSource&    region,
        class BlockPos const& placementPos,
        uchar
    );

    // symbol:
    // ?getBlockForPlacementWorldGen@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVIBlockWorldGenAPI@@AEBVBlockPos@@E@Z
    MCAPI static class Block const& getBlockForPlacementWorldGen(
        class Block const&       oldBlock,
        class Block const&       placementBlock,
        class IBlockWorldGenAPI& region,
        class BlockPos const&    placementPos,
        uchar
    );

    // symbol: ?getMultifaceValueFromFace@MultifaceBlock@@SAHE@Z
    MCAPI static int getMultifaceValueFromFace(uchar face);

    // symbol: ?hasFace@MultifaceBlock@@SA_NAEBVBlock@@E@Z
    MCAPI static bool hasFace(class Block const& block, uchar);

    // symbol: ?MULTIFACE_ALL@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_ALL;

    // symbol: ?MULTIFACE_DOWN@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_DOWN;

    // symbol: ?MULTIFACE_EAST@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_EAST;

    // symbol: ?MULTIFACE_NORTH@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_NORTH;

    // symbol: ?MULTIFACE_SIDES@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_SIDES;

    // symbol: ?MULTIFACE_SOUTH@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_SOUTH;

    // symbol: ?MULTIFACE_UP@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_UP;

    // symbol: ?MULTIFACE_WEST@MultifaceBlock@@2HB
    MCAPI static int const MULTIFACE_WEST;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canSpread@MultifaceBlock@@IEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
    MCAPI bool
    _canSpread(class IBlockWorldGenAPI& target, class Block const& block, class BlockPos const& pos, uchar) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_removeBlock@MultifaceBlock@@AEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void
    _removeBlock(class IBlockWorldGenAPI& target, class BlockSource* region, class BlockPos const& pos, bool) const;

    // NOLINTEND
};
