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
    // vIndex: 0, symbol: ??1DispenserBlock@@UEAA@XZ
    virtual ~DispenserBlock();

    // vIndex: 30, symbol: ?isContainerBlock@DispenserBlock@@UEBA_NXZ
    virtual bool isContainerBlock() const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@DispenserBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@DispenserBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@DispenserBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 128, symbol: ?getVariant@DispenserBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131, symbol: ?getMappedFace@DispenserBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 142, symbol: ?onRemove@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@DispenserBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@DispenserBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@DispenserBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 152, symbol: ?allowStateMismatchOnPlacement@DispenserBlock@@UEBA_NAEBVBlock@@0@Z
    virtual bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // vIndex: 163, symbol: ?getTickDelay@DispenserBlock@@UEBAHXZ
    virtual int getTickDelay() const;

    // vIndex: 164, symbol: ?dispenseFrom@DispenserBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void dispenseFrom(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0DispenserBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DispenserBlock(std::string const& nameId, int id);

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
