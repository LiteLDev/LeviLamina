#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
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

class LeavesBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    LeavesBlock& operator=(LeavesBlock const&);
    LeavesBlock(LeavesBlock const&);
    LeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LeavesBlock@@UEAA@XZ
    virtual ~LeavesBlock();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?canProvideSupport@LeavesBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 24, symbol: ?canProvideMultifaceSupport@LeavesBlock@@UEBA_NAEBVBlock@@E@Z
    virtual bool canProvideMultifaceSupport(class Block const&, uchar) const;

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

    // vIndex: 56, symbol: ?canContainLiquid@LeavesBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 89, symbol: ?breaksFallingBlocks@LeavesBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 95, symbol:
    // ?spawnResources@LeavesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnResources(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Randomize& randomize, struct ResourceDropsContext const&)
        const;

    // vIndex: 98, symbol: ?getPlacementBlock@LeavesBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

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

    // vIndex: 122, symbol: ?getColor@LeavesBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 125, symbol: ?isSeasonTinted@LeavesBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isSeasonTinted(class Block const& block, class BlockSource& region, class BlockPos const& p) const;

    // vIndex: 126, symbol: ?onGraphicsModeChanged@LeavesBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 144, symbol: ?onRemove@LeavesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 151, symbol: ?randomTick@LeavesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 158, symbol:
    // ?getRenderLayer@LeavesBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 162, symbol: ?getMapColor@LeavesBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 165, symbol: ?getResourceCount@LeavesBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize& randomize, class Block const&, int) const;

    // vIndex: 168, symbol: ?getExtraResourceItem@LeavesBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getExtraResourceItem(class Block const&) const;

    // symbol:
    // ??0LeavesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@VBlockLegacy@@@@@Z
    MCAPI LeavesBlock(std::string const& nameId, int id, class WeakPtr<class BlockLegacy> sapling);

    // symbol: ?getSeasonsColor@LeavesBlock@@QEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@HH@Z
    MCAPI class mce::Color
    getSeasonsColor(class BlockSource& region, class BlockPos const& pos, int startColumn, int endColumn) const;

    // symbol: ?runDecay@LeavesBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI static void runDecay(class BlockSource& region, class BlockPos const& pos, int range);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getSapling@LeavesBlock@@IEBAAEBVBlock@@XZ
    MCAPI class Block const& _getSapling() const;

    // symbol: ?_isTransparent@LeavesBlock@@KA_NAEBVBlock@@AEBW4BlockProperty@@@Z
    MCAPI static bool _isTransparent(class Block const& block, ::BlockProperty const&);

    // NOLINTEND
};
