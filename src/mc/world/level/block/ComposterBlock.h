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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ComposterBlock();

    // vIndex: 5, symbol:
    // ?clip@ComposterBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult // NOLINT
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8, symbol:
    // ?addCollisionShapes@ComposterBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    addCollisionShapes(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>) // NOLINT
        const;

    // vIndex: 9, symbol:
    // ?addAABBs@ComposterBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void
    addAABBs(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&) // NOLINT
        const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 25, symbol: ?canProvideSupport@ComposterBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
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

    // vIndex: 63, symbol: ?canContainLiquid@ComposterBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 75, symbol: ?onMove@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 97, symbol: ?breaksFallingBlocks@ComposterBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: ?getComparatorSignal@ComposterBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 142, symbol: ?getVariant@ComposterBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 159, symbol: ?onRemove@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@ComposterBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

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
