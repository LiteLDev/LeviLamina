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

class PowderSnowBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PowderSnowBlock& operator=(PowderSnowBlock const&);
    PowderSnowBlock(PowderSnowBlock const&);
    PowderSnowBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PowderSnowBlock@@UEAA@XZ
    virtual ~PowderSnowBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@PowderSnowBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?canProvideSupport@PowderSnowBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 25, symbol: ?canConnect@PowderSnowBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

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

    // vIndex: 32, symbol: ?isWaterBlocking@PowderSnowBlock@@UEBA_NXZ
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

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 56, symbol: ?canContainLiquid@PowderSnowBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 89, symbol: ?breaksFallingBlocks@PowderSnowBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 96, symbol: ?asItemInstance@PowderSnowBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

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

    // vIndex: 148, symbol: ?onFallOn@PowderSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void
    onFallOn(class BlockSource& region, class BlockPos const& pos, class Actor& entity, float fallDistance) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // symbol: ?canBeDestroyedByWaterSpread@PowderSnowBlock@@UEBA_NXZ
    MCVAPI bool canBeDestroyedByWaterSpread() const;

    // symbol: ?canBeSilkTouched@PowderSnowBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?causesFreezeEffect@PowderSnowBlock@@UEBA_NXZ
    MCVAPI bool causesFreezeEffect() const;

    // symbol:
    // ??0PowderSnowBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI PowderSnowBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?canWalkOnTop@PowderSnowBlock@@SA_NAEBVGetCollisionShapeInterface@@@Z
    MCAPI static bool canWalkOnTop(class GetCollisionShapeInterface const& actor);

    // symbol: ?clearFire@PowderSnowBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI static void clearFire(class BlockSource& region, class BlockPos const& pos, class Block const& block);

    // symbol: ?spawnPowderSnowParticles@PowderSnowBlock@@SAXAEAVLevel@@AEBVBlockPos@@@Z
    MCAPI static void spawnPowderSnowParticles(class Level& level, class BlockPos const& pos);

    // NOLINTEND
};
