#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
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
    // PowderSnowBlock inner types declare
    // clang-format off
    class PowderSnowInternal;
    // clang-format on

    // PowderSnowBlock inner types define
    class PowderSnowInternal {
    public:
        // prevent constructor by default
        PowderSnowInternal& operator=(PowderSnowInternal const&) = delete;
        PowderSnowInternal(PowderSnowInternal const&)            = delete;
        PowderSnowInternal()                                     = delete;

    public:
        // NOLINTBEGIN
        // symbol: ?fallingCollisionShape@PowderSnowInternal@PowderSnowBlock@@2VAABB@@B
        MCAPI static class AABB const fallingCollisionShape;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PowderSnowBlock& operator=(PowderSnowBlock const&) = delete;
    PowderSnowBlock(PowderSnowBlock const&)            = delete;
    PowderSnowBlock()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol:
    // ?getCollisionShape@PowderSnowBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    getCollisionShape(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8, symbol:
    // ?getAABB@PowderSnowBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 25, symbol: ?canProvideSupport@PowderSnowBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 28, symbol: ?canConnect@PowderSnowBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: ?isClimbable@PowderSnowBlock@@UEBA_NAEBUIActorMovementProxy@@@Z
    virtual bool isClimbable(struct IActorMovementProxy const&) const;

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: ?isWaterBlocking@PowderSnowBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

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

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 55, symbol: ?canBeAscendedByJumping@PowderSnowBlock@@UEBA_NAEBVActor@@AEBVBlockPos@@@Z
    virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 64, symbol: ?canContainLiquid@PowderSnowBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 98, symbol: ?breaksFallingBlocks@PowderSnowBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 105, symbol: ?asItemInstance@PowderSnowBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 166, symbol: ?onFallOn@PowderSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // symbol: ?canBeDestroyedByWaterSpread@PowderSnowBlock@@UEBA_NXZ
    MCVAPI bool canBeDestroyedByWaterSpread() const;

    // symbol: ?canBeSilkTouched@PowderSnowBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?causesFreezeEffect@PowderSnowBlock@@UEBA_NXZ
    MCVAPI bool causesFreezeEffect() const;

    // symbol:
    // ??0PowderSnowBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI PowderSnowBlock(std::string const&, int, class Material const&);

    // symbol: ?canWalkOnTop@PowderSnowBlock@@SA_NAEBUIActorMovementProxy@@@Z
    MCAPI static bool canWalkOnTop(struct IActorMovementProxy const&);

    // symbol: ?canWalkOnTop@PowderSnowBlock@@SA_NAEBVGetCollisionShapeInterface@@@Z
    MCAPI static bool canWalkOnTop(class GetCollisionShapeInterface const&);

    // symbol: ?clearFire@PowderSnowBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI static void clearFire(class BlockSource&, class BlockPos const&, class Block const&);

    // symbol: ?spawnPowderSnowParticles@PowderSnowBlock@@SAXAEAVLevel@@AEBVBlockPos@@@Z
    MCAPI static void spawnPowderSnowParticles(class Level&, class BlockPos const&);

    // NOLINTEND
};
