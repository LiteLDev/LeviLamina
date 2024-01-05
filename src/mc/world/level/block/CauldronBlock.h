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

    // vIndex: 4, symbol:
    // ?clip@CauldronBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@CauldronBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class BlockSource const&                                   region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8, symbol:
    // ?addAABBs@CauldronBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void addAABBs(
        class Block const&       block,
        class BlockSource const& region,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?canProvideSupport@CauldronBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

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

    // vIndex: 56, symbol: ?canContainLiquid@CauldronBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 59, symbol: ?handlePrecipitation@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@MM@Z
    virtual void
    handlePrecipitation(class BlockSource& region, class BlockPos const& pos, float downfallAmount, float temperature)
        const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 89, symbol: ?breaksFallingBlocks@CauldronBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 92, symbol: ?neighborChanged@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96, symbol: ?asItemInstance@CauldronBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 112, symbol: ?getComparatorSignal@CauldronBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 134, symbol: ?animateTickBedrockLegacy@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 137, symbol: ?getLightEmission@CauldronBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@CauldronBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 159, symbol: ?getExtraRenderLayers@CauldronBlock@@UEBAHXZ
    virtual int getExtraRenderLayers() const;

    // vIndex: 160, symbol: ?getLight@CauldronBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLight(class Block const& block) const;

    // vIndex: 164, symbol: ?getResourceItem@CauldronBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 166, symbol: ?getSilkTouchItemInstance@CauldronBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const& block) const;

    // symbol: ?hasComparatorSignal@CauldronBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?isInteractiveBlock@CauldronBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0CauldronBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CauldronBlock(std::string const& nameId, int);

    // symbol: ?setLiquidLevel@CauldronBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@HW4CauldronLiquidType@@@Z
    MCAPI void
    setLiquidLevel(class BlockSource& region, class BlockPos const& pos, int, ::CauldronLiquidType type) const;

    // symbol: ?canReceiveStalactiteDrip@CauldronBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@W4MaterialType@@@Z
    MCAPI static bool canReceiveStalactiteDrip(class BlockSource& region, class BlockPos const& pos, ::MaterialType);

    // symbol: ?clampLiquidLevel@CauldronBlock@@SAHH@Z
    MCAPI static int clampLiquidLevel(int);

    // symbol: ?spawnPotionParticles@CauldronBlock@@SAXAEAVLevel@@AEBVVec3@@AEAVRandom@@HH@Z
    MCAPI static void
    spawnPotionParticles(class Level& level, class Vec3 const& pos, class Random& random, int color, int count);

    // symbol: ?FILL_LEVEL_PER_DRIP@CauldronBlock@@2HB
    MCAPI static int const FILL_LEVEL_PER_DRIP;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkForStalactiteDrip@CauldronBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _checkForStalactiteDrip(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_explodeCauldronContents@CauldronBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@G@Z
    MCAPI void _explodeCauldronContents(class BlockSource& region, class BlockPos const& pos, ushort data) const;

    // symbol: ?_mayUpdateLiquidLevel@CauldronBlock@@AEBA?B_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool const _mayUpdateLiquidLevel(class BlockSource& region, class BlockPos const& pos) const;

    // symbol:
    // ?_sendCauldronUsedEventToClient@CauldronBlock@@AEBAXAEBVPlayer@@FW4POIBlockInteractionType@MinecraftEventing@@@Z
    MCAPI void _sendCauldronUsedEventToClient(
        class Player const&                          player,
        short                                        itemId,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    ) const;

    // symbol: ?_spawnCauldronEvent@CauldronBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@W4LevelEvent@@@Z
    MCAPI void _spawnCauldronEvent(class BlockSource& region, class BlockPos const& pos, ::LevelEvent levelEvent) const;

    // symbol:
    // ?_useDyeableComponent@CauldronBlock@@AEBA_NAEAVItemStack@@AEAVPlayer@@AEBVBlockPos@@AEAVCauldronBlockActor@@AEAVBlockSource@@H_N55@Z
    MCAPI bool _useDyeableComponent(
        class ItemStack&          itemInstance,
        class Player&             player,
        class BlockPos const&     pos,
        class CauldronBlockActor& blockEntity,
        class BlockSource&        region,
        int                       fillLevel,
        bool,
        bool isWater,
        bool
    ) const;

    // symbol: ?_useInventory@CauldronBlock@@AEBAXAEAVPlayer@@AEAVItemStack@@1H@Z
    MCAPI void
    _useInventory(class Player& player, class ItemStack& current, class ItemStack& replaceWith, int useCount) const;

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
