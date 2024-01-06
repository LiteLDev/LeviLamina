#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ChestBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class UndyedShulkerBoxBlock : public ::ChestBlock {
public:
    // prevent constructor by default
    UndyedShulkerBoxBlock& operator=(UndyedShulkerBoxBlock const&);
    UndyedShulkerBoxBlock(UndyedShulkerBoxBlock const&);
    UndyedShulkerBoxBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UndyedShulkerBoxBlock@@UEAA@XZ
    virtual ~UndyedShulkerBoxBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@UndyedShulkerBoxBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@UndyedShulkerBoxBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?canProvideSupport@UndyedShulkerBoxBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
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

    // vIndex: 63, symbol: ?dispense@UndyedShulkerBoxBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 71, symbol: ?setupRedstoneComponent@UndyedShulkerBoxBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 89, symbol: ?breaksFallingBlocks@UndyedShulkerBoxBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 94, symbol: ?playerWillDestroy@UndyedShulkerBoxBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 95, symbol:
    // ?spawnResources@UndyedShulkerBoxBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnResources(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Randomize&, struct ResourceDropsContext const&)
        const;

    // vIndex: 96, symbol: ?asItemInstance@UndyedShulkerBoxBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 98, symbol:
    // ?getPlacementBlock@UndyedShulkerBoxBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
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

    // vIndex: 121, symbol: ?getColor@UndyedShulkerBoxBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const&) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 164, symbol: ?getResourceItem@UndyedShulkerBoxBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const& block, int) const;

    // symbol: ??0UndyedShulkerBoxBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI UndyedShulkerBoxBlock(std::string const& nameId, int id);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?spawnBoxInstance@UndyedShulkerBoxBlock@@IEBAXAEAVBlockSource@@AEAVLevel@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@7@H@Z
    MCAPI void spawnBoxInstance(
        class BlockSource&                 region,
        class Level&                       level,
        class BlockPos const&              pos,
        class Block const&                 block,
        std::string const&                 name,
        std::unique_ptr<class CompoundTag> chestData,
        int                                repair
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isValidAttach@UndyedShulkerBoxBlock@@AEBA_NAEAVBlockSource@@VBlockPos@@E@Z
    MCAPI bool _isValidAttach(class BlockSource& region, class BlockPos pos, uchar direction) const;

    // symbol: ?_tryGetShape@UndyedShulkerBoxBlock@@CA_NAEBVIConstBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    MCAPI static bool _tryGetShape(class IConstBlockSource const&, class BlockPos const&, class AABB&);

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?SHULKER_BOX_DOESNT_BREAK_FALLING_BLOCK_VERSION@UndyedShulkerBoxBlock@@1VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const SHULKER_BOX_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $SHULKER_BOX_DOESNT_BREAK_FALLING_BLOCK_VERSION() {
        return SHULKER_BOX_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    }

    // NOLINTEND
};
