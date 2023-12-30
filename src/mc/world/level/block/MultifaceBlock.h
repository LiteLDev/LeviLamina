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

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

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

    // vIndex: 32, symbol: ?isWaterBlocking@MultifaceBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

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

    // vIndex: 51, symbol: ?sanitizeFillBlock@MultifaceBlock@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const& sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 84, symbol: ?mayPlace@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, uchar) const;

    // vIndex: 92, symbol: ?neighborChanged@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 98, symbol: ?getPlacementBlock@MultifaceBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
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

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@MultifaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@MultifaceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 168, symbol: ?getMultifaceBlock@GlowLichenBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getMultifaceBlock() const = 0;

    // vIndex: 169, symbol: ?getMultifaceSpreader@GlowLichenBlock@@UEBAAEBVMultifaceSpreader@@XZ
    virtual class MultifaceSpreader const& getMultifaceSpreader() const = 0;

    // symbol: ?isMultifaceBlock@MultifaceBlock@@UEBA_NXZ
    MCVAPI bool isMultifaceBlock() const;

    // symbol:
    // ??0MultifaceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI MultifaceBlock(std::string const&, int, class Material const&);

    // symbol: ?removeFace@MultifaceBlock@@QEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@E_N@Z
    MCAPI void
    removeFace(class IBlockWorldGenAPI&, class BlockSource*, class Block const&, class BlockPos const&, uchar, bool)
        const;

    // symbol: ?convertOldMultifaceToNewMultifaceValue@MultifaceBlock@@SAHH@Z
    MCAPI static int convertOldMultifaceToNewMultifaceValue(int);

    // symbol: ?getBlockForPlacement@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI static class Block const&
    getBlockForPlacement(class Block const&, class Block const&, class BlockSource&, class BlockPos const&, uchar);

    // symbol:
    // ?getBlockForPlacementWorldGen@MultifaceBlock@@SAAEBVBlock@@AEBV2@0AEAVIBlockWorldGenAPI@@AEBVBlockPos@@E@Z
    MCAPI static class Block const& getBlockForPlacementWorldGen(
        class Block const&,
        class Block const&,
        class IBlockWorldGenAPI&,
        class BlockPos const&,
        uchar
    );

    // symbol: ?getMultifaceValueFromFace@MultifaceBlock@@SAHE@Z
    MCAPI static int getMultifaceValueFromFace(uchar);

    // symbol: ?hasFace@MultifaceBlock@@SA_NAEBVBlock@@E@Z
    MCAPI static bool hasFace(class Block const&, uchar);

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
    MCAPI bool _canSpread(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, uchar) const;

    // symbol: ?_getNumSides@MultifaceBlock@@IEBAHAEBVBlock@@@Z
    MCAPI int _getNumSides(class Block const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_removeBlock@MultifaceBlock@@AEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void _removeBlock(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, bool) const;

    // NOLINTEND
};
