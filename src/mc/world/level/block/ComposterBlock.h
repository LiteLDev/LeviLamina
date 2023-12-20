#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ComposterBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ComposterBlock& operator=(ComposterBlock const&);
    ComposterBlock(ComposterBlock const&);
    ComposterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ComposterBlock@@UEAA@XZ
    virtual ~ComposterBlock() = default;

    // vIndex: 4, symbol:
    // ?clip@ComposterBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@ComposterBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    addCollisionShapes(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8, symbol:
    // ?addAABBs@ComposterBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void
    addAABBs(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?canProvideSupport@ComposterBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

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

    // vIndex: 56, symbol: ?canContainLiquid@ComposterBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 66, symbol: ?onMove@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 89, symbol: ?breaksFallingBlocks@ComposterBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 112, symbol: ?getComparatorSignal@ComposterBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 129, symbol: ?getVariant@ComposterBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 144, symbol: ?onRemove@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 147, symbol: ?onPlace@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@ComposterBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // symbol: ?hasComparatorSignal@ComposterBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ??0ComposterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ComposterBlock(std::string const&, int);

    // symbol: ?addItem@ComposterBlock@@SA_NAEAVContainer@@HAEAVItemStack@@AEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static bool
    addItem(class Container&, int, class ItemStack&, class BlockSource&, class Block const&, class BlockPos const&);

    // symbol:
    // ?addItems@ComposterBlock@@SA_NAEAVContainer@@HAEAVItemStack@@HAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static bool
    addItems(class Container&, int, class ItemStack&, int, class BlockSource&, class Block const&, class BlockPos const&);

    // symbol: ?addItems@ComposterBlock@@SAHAEBVItemStack@@HAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static int
    addItems(class ItemStack const&, int, class BlockSource&, class Block const&, class BlockPos const&);

    // symbol: ?empty@ComposterBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static void empty(class BlockSource&, class Block const&, class BlockPos const&);

    // symbol: ?extractItem@ComposterBlock@@SA?AVItemStack@@AEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static class ItemStack extractItem(class BlockSource&, class Block const&, class BlockPos const&);

    // symbol: ?getComposterAt@ComposterBlock@@SAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class Block const* getComposterAt(class BlockSource&, class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_emitBoneMeal@ComposterBlock@@AEBAXAEAVLevel@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _emitBoneMeal(class Level&, class BlockSource&, class BlockPos const&) const;

    // symbol:
    // ?_notifyClientComposterUsed@ComposterBlock@@AEBAXAEBVPlayer@@FW4POIBlockInteractionType@MinecraftEventing@@@Z
    MCAPI void
    _notifyClientComposterUsed(class Player const&, short, ::MinecraftEventing::POIBlockInteractionType) const;

    // symbol:
    // ?_getCompostableItems@ComposterBlock@@CAAEBV?$unordered_map@_KCU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KC@std@@@2@@std@@XZ
    MCAPI static std::unordered_map<uint64, schar> const& _getCompostableItems();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION@ComposterBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // symbol: ?PARTICLE_OFFSET@ComposterBlock@@0VVec3@@B
    MCAPI static class Vec3 const PARTICLE_OFFSET;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION() {
        return COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    }

    static auto& $PARTICLE_OFFSET() { return PARTICLE_OFFSET; }

    // NOLINTEND
};
