#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CauldronLiquidType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/ShapeType.h"
#include "mc/events/LevelEvent.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CauldronBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CauldronBlock& operator=(CauldronBlock const&);
    CauldronBlock(CauldronBlock const&);
    CauldronBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CauldronBlock@@UEAA@XZ
    virtual ~CauldronBlock() = default;

    // vIndex: 5, symbol:
    // ?clip@CauldronBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8, symbol:
    // ?addCollisionShapes@CauldronBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    addCollisionShapes(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?addAABBs@CauldronBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void
    addAABBs(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 25, symbol: ?canProvideSupport@CauldronBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: ?canContainLiquid@CauldronBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 66, symbol: ?handlePrecipitation@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@MM@Z
    virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 97, symbol: ?breaksFallingBlocks@CauldronBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 100, symbol: ?neighborChanged@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 104, symbol: ?asItemInstance@CauldronBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: ?getComparatorSignal@CauldronBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 147, symbol: ?animateTickBedrockLegacy@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 150, symbol: ?getLightEmission@CauldronBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@CauldronBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 178, symbol: ?getExtraRenderLayers@CauldronBlock@@UEBAHXZ
    virtual int getExtraRenderLayers() const;

    // vIndex: 180, symbol: ?getLight@CauldronBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLight(class Block const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 185, symbol: ?getResourceItem@CauldronBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 187, symbol: ?getSilkTouchItemInstance@CauldronBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;

    // symbol: ?hasComparatorSignal@CauldronBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?isInteractiveBlock@CauldronBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0CauldronBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CauldronBlock(std::string const&, int);

    // symbol: ?setLiquidLevel@CauldronBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@HW4CauldronLiquidType@@@Z
    MCAPI void setLiquidLevel(class BlockSource&, class BlockPos const&, int, ::CauldronLiquidType) const;

    // symbol: ?canReceiveStalactiteDrip@CauldronBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@W4MaterialType@@@Z
    MCAPI static bool canReceiveStalactiteDrip(class BlockSource&, class BlockPos const&, ::MaterialType);

    // symbol: ?clampLiquidLevel@CauldronBlock@@SAHH@Z
    MCAPI static int clampLiquidLevel(int);

    // symbol: ?spawnPotionParticles@CauldronBlock@@SAXAEAVLevel@@AEBVVec3@@AEAVRandom@@HH@Z
    MCAPI static void spawnPotionParticles(class Level&, class Vec3 const&, class Random&, int, int);

    // symbol: ?FILL_LEVEL_PER_DRIP@CauldronBlock@@2HB
    MCAPI static int const FILL_LEVEL_PER_DRIP;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkForStalactiteDrip@CauldronBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _checkForStalactiteDrip(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_explodeCauldronContents@CauldronBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@G@Z
    MCAPI void _explodeCauldronContents(class BlockSource&, class BlockPos const&, ushort) const;

    // symbol: ?_mayUpdateLiquidLevel@CauldronBlock@@AEBA?B_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool const _mayUpdateLiquidLevel(class BlockSource&, class BlockPos const&) const;

    // symbol:
    // ?_sendCauldronUsedEventToClient@CauldronBlock@@AEBAXAEBVPlayer@@FW4POIBlockInteractionType@MinecraftEventing@@@Z
    MCAPI void
    _sendCauldronUsedEventToClient(class Player const&, short, ::MinecraftEventing::POIBlockInteractionType) const;

    // symbol: ?_spawnCauldronEvent@CauldronBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@W4LevelEvent@@@Z
    MCAPI void _spawnCauldronEvent(class BlockSource&, class BlockPos const&, ::LevelEvent) const;

    // symbol:
    // ?_useDyeableComponent@CauldronBlock@@AEBA_NAEAVItemStack@@AEAVPlayer@@AEBVBlockPos@@AEAVCauldronBlockActor@@AEAVBlockSource@@H_N55@Z
    MCAPI bool _useDyeableComponent(
        class ItemStack&,
        class Player&,
        class BlockPos const&,
        class CauldronBlockActor&,
        class BlockSource&,
        int,
        bool,
        bool,
        bool
    ) const;

    // symbol: ?_useInventory@CauldronBlock@@AEBAXAEAVPlayer@@AEAVItemStack@@1H@Z
    MCAPI void _useInventory(class Player&, class ItemStack&, class ItemStack&, int) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?BASE_WATER_PIXEL@CauldronBlock@@0HB
    MCAPI static int const BASE_WATER_PIXEL;

    // symbol: ?CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION@CauldronBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // symbol: ?PIXEL_PER_LEVEL@CauldronBlock@@0HB
    MCAPI static int const PIXEL_PER_LEVEL;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $BASE_WATER_PIXEL() { return BASE_WATER_PIXEL; }

    static auto& $CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION() { return CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION; }

    static auto& $PIXEL_PER_LEVEL() { return PIXEL_PER_LEVEL; }

    // NOLINTEND
};
