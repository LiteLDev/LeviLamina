#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DispenserBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    DispenserBlock& operator=(DispenserBlock const&);
    DispenserBlock(DispenserBlock const&);
    DispenserBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DispenserBlock@@UEAA@XZ
    virtual ~DispenserBlock() = default;

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

    // vIndex: 65, symbol: ?onRedstoneUpdate@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 71, symbol: ?setupRedstoneComponent@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 98, symbol: ?getPlacementBlock@DispenserBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 112, symbol: ?getComparatorSignal@DispenserBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 129, symbol: ?getVariant@DispenserBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132, symbol: ?getMappedFace@DispenserBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 144, symbol: ?onRemove@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?onPlace@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@DispenserBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 164, symbol: ?getResourceItem@DispenserBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 166, symbol: ?getSilkTouchItemInstance@DispenserBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const& block) const;

    // vIndex: 169, symbol: ?getTickDelay@DispenserBlock@@UEBAHXZ
    virtual int getTickDelay() const;

    // vIndex: 170, symbol: ?dispenseFrom@DispenserBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void dispenseFrom(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?hasComparatorSignal@DispenserBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?isContainerBlock@DispenserBlock@@UEBA_NXZ
    MCVAPI bool isContainerBlock() const;

    // symbol: ?isInteractiveBlock@DispenserBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0DispenserBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DispenserBlock(std::string const& nameId, int);

    // symbol: ?dropAllItemsFromContainer@DispenserBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void dropAllItemsFromContainer(class BlockSource&, class BlockPos const&);

    // symbol: ?ejectItem@DispenserBlock@@SAXAEAVBlockSource@@AEBVVec3@@EAEBVItemStack@@H@Z
    MCAPI static void
    ejectItem(class BlockSource& region, class Vec3 const& pos, uchar face, class ItemStack const& item, int);

    // symbol: ?openInventoryContainer@DispenserBlock@@SAXAEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI static void openInventoryContainer(class Player&, class BlockPos const&);

    // symbol: ?setupConsumerRedstoneComponent@DispenserBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void setupConsumerRedstoneComponent(class BlockSource&, class BlockPos const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?ejectItem@DispenserBlock@@IEBAXAEAVBlockSource@@AEBVVec3@@EAEBVItemStack@@AEAVContainer@@HH@Z
    MCAPI void ejectItem(
        class BlockSource&     region,
        class Vec3 const&      pos,
        uchar                  face,
        class ItemStack const& item,
        class Container&       container,
        int                    slot,
        int
    ) const;

    // symbol: ?getDispensePosition@DispenserBlock@@IEBA?AVVec3@@AEAVBlockSource@@AEBV2@@Z
    MCAPI class Vec3 getDispensePosition(class BlockSource& region, class Vec3 const& pos) const;

    // symbol: ?getFacing@DispenserBlock@@IEBAEAEBVBlock@@@Z
    MCAPI uchar getFacing(class Block const& block) const;

    // NOLINTEND
};
