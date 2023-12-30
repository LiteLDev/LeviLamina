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

class SlabBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SlabBlock& operator=(SlabBlock const&);
    SlabBlock(SlabBlock const&);
    SlabBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SlabBlock@@UEAA@XZ
    virtual ~SlabBlock();

    // vIndex: 11, symbol: ?getVisualShape@SlabBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 14, symbol: ?isObstructingChests@SlabBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool isObstructingChests(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 19, symbol:
    // ?liquidCanFlowIntoFromDirection@SlabBlock@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                           flowIntoFacing,
        std::function<class Block const&(class BlockPos const&)> const& getBlock,
        class BlockPos const&                                           pos
    ) const;

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

    // vIndex: 39, symbol: ?isDoubleSlabBlock@SlabBlock@@UEBA_NXZ
    virtual bool isDoubleSlabBlock() const;

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

    // vIndex: 61, symbol: ?checkIsPathable@SlabBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 72, symbol: ?getRedstoneProperty@SlabBlock@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockProperty getRedstoneProperty(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 89, symbol: ?breaksFallingBlocks@SlabBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 96, symbol: ?asItemInstance@SlabBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 107, symbol: ?getMobToSpawn@SlabBlock@@UEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z
    virtual class MobSpawnerData const*
    getMobToSpawn(class SpawnConditions const& conditions, class BlockSource& region) const;

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

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 164, symbol: ?getResourceItem@SlabBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 165, symbol: ?getResourceCount@SlabBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize& random, class Block const& block, int bonusLootLevel) const;

    // symbol: ?canBeSilkTouched@SlabBlock@@MEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?isSlabBlock@SlabBlock@@UEBA_NXZ
    MCVAPI bool isSlabBlock() const;

    // symbol:
    // ??0SlabBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NAEBVMaterial@@V?$WeakPtr@VBlockLegacy@@@@@Z
    MCAPI SlabBlock(
        std::string const&               nameId,
        int                              id,
        bool                             _fullsize,
        class Material const&            mat,
        class WeakPtr<class BlockLegacy> baseSlab
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?getBaseSlab@SlabBlock@@IEBAAEBVBlock@@XZ
    MCAPI class Block const& getBaseSlab() const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION@SlabBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION() { return TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION; }

    // NOLINTEND
};
