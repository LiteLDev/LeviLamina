#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/WallConnectionType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WallBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    WallBlock& operator=(WallBlock const&);
    WallBlock(WallBlock const&);
    WallBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WallBlock@@UEAA@XZ
    virtual ~WallBlock();

    // vIndex: 4, symbol:
    // ?clip@WallBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5, symbol:
    // ?getCollisionShape@WallBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol: ?getOutline@WallBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@WallBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 13, symbol: ?getLiquidClipVolume@WallBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?canProvideSupport@WallBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 25, symbol: ?canConnect@WallBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 56, symbol: ?canContainLiquid@WallBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 69, symbol: ?onStructureBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 70, symbol: ?onStructureNeighborBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 89, symbol: ?breaksFallingBlocks@WallBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 92, symbol: ?neighborChanged@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 96, symbol: ?asItemInstance@WallBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 98, symbol: ?getPlacementBlock@WallBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 119, symbol:
    // ?buildDescriptionId@WallBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@WallBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129, symbol: ?getVariant@WallBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 162, symbol: ?getMapColor@WallBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // symbol: ?canBeSilkTouched@WallBlock@@MEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?isWallBlock@WallBlock@@UEBA_NXZ
    MCVAPI bool isWallBlock() const;

    // symbol: ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@@Z
    MCAPI WallBlock(std::string const&, int, class BlockLegacy const&);

    // symbol: ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI WallBlock(std::string const&, int, class Material const&);

    // symbol: ?tryFixWallStates@WallBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void tryFixWallStates(class BlockSource&, class BlockPos const&, int) const;

    // symbol: ?POST_HEIGHT@WallBlock@@2MB
    MCAPI static float const POST_HEIGHT;

    // symbol: ?POST_WIDTH@WallBlock@@2MB
    MCAPI static float const POST_WIDTH;

    // symbol: ?WALL_HEIGHT@WallBlock@@2MB
    MCAPI static float const WALL_HEIGHT;

    // symbol:
    // ?WALL_NAMES@WallBlock@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$0O@@std@@B
    MCAPI static std::array<std::string, 14> const WALL_NAMES;

    // symbol: ?WALL_WIDTH@WallBlock@@2MB
    MCAPI static float const WALL_WIDTH;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_desiredConnectionState@WallBlock@@AEBA?AW4WallConnectionType@@AEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI ::WallConnectionType _desiredConnectionState(class BlockSource&, class BlockPos const&, uchar) const;

    // symbol: ?_isCovered@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVAABB@@@Z
    MCAPI bool _isCovered(class BlockSource&, class BlockPos const&, class AABB const&) const;

    // symbol: ?_shouldBePost@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool _shouldBePost(class BlockSource&, class BlockPos const&, class Block const&) const;

    // symbol: ?_tryAddToTickingQueue@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _tryAddToTickingQueue(class BlockSource&, class BlockPos const&) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION@WallBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION() { return WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION; }

    // NOLINTEND
};
