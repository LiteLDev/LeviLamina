#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/DoublePlantType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/DoublePlantBaseBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DoublePlantBlock : public ::DoublePlantBaseBlock {
public:
    // prevent constructor by default
    DoublePlantBlock& operator=(DoublePlantBlock const&);
    DoublePlantBlock(DoublePlantBlock const&);
    DoublePlantBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DoublePlantBlock@@UEAA@XZ
    virtual ~DoublePlantBlock() = default;

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

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 71, symbol: ?setupRedstoneComponent@DoublePlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 79, symbol:
    // ?onFertilized@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, enum FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 96, symbol: ?asItemInstance@DoublePlantBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 104, symbol: ?canBeBuiltOver@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canBeBuiltOver(class BlockSource& region, class BlockPos const& pos) const;

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

    // vIndex: 119, symbol:
    // ?buildDescriptionId@DoublePlantBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@DoublePlantBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 122, symbol: ?getColor@DoublePlantBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 124, symbol: ?getColorForParticle@DoublePlantBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int
    getColorForParticle(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 129, symbol: ?getVariant@DoublePlantBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 157, symbol: ?getRenderLayer@DoublePlantBlock@@UEBA?AW4BlockRenderLayer@@XZ
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 158, symbol:
    // ?getRenderLayer@DoublePlantBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 163, symbol: ?playerDestroy@DoublePlantBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void playerDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 164, symbol: ?getResourceItem@DoublePlantBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance
    getResourceItem(class Randomize& random, class Block const& block, int bonusLootLevel) const;

    // vIndex: 170, symbol: ?_keepRelevantStateForDropping@DoublePlantBlock@@MEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& _keepRelevantStateForDropping(class Block const&) const;

    // symbol: ??0DoublePlantBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DoublePlantBlock(std::string const& nameId, int id);

    // symbol: ?getType@DoublePlantBlock@@QEBAHAEBVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI int getType(class BlockSource const& region, class BlockPos const& pos, class Block const& block) const;

    // symbol: ?placeAt@DoublePlantBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@W4DoublePlantType@@HPEAVActor@@@Z
    MCAPI bool placeAt(
        class BlockSource&    region,
        class BlockPos const& pos,
        enum DoublePlantType  plantType,
        int                   updateType,
        class Actor*          player
    ) const;

    // NOLINTEND
};
