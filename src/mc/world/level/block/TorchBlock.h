#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/TorchFacing.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TorchBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TorchBlock& operator=(TorchBlock const&);
    TorchBlock(TorchBlock const&);
    TorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TorchBlock@@UEAA@XZ
    virtual ~TorchBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@TorchBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@TorchBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@TorchBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@TorchBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 85, symbol: ?mayPlace@TorchBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@TorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@TorchBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 117, symbol: ?getIconYOffset@TorchBlock@@UEBAHXZ
    virtual int getIconYOffset() const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@TorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@TorchBlock@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 145, symbol: ?onPlace@TorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@TorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@TorchBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@TorchBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const& block, class BlockSource&, class BlockPos const& pos) const;

    // symbol: ??0TorchBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4MaterialType@@@Z
    MCAPI TorchBlock(std::string const& nameId, int id, ::MaterialType mat);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_flameParticlePos@TorchBlock@@IEBA?AVVec3@@AEBVBlockPos@@W4TorchFacing@@@Z
    MCAPI class Vec3 _flameParticlePos(class BlockPos const& pos, ::TorchFacing dir) const;

    // symbol: ?canBePlacedOn@TorchBlock@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI bool canBePlacedOn(class BlockSource& region, class BlockPos const& pos, uchar facing) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DATA_FROM_FACING@TorchBlock@@0QBW4TorchFacing@@B
    MCAPI static ::TorchFacing const DATA_FROM_FACING[];

    // symbol: ?FACING_FROM_DATA@TorchBlock@@0QBGB
    MCAPI static ushort const FACING_FROM_DATA[];

    // NOLINTEND
};
