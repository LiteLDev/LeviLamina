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

class CrafterBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CrafterBlock& operator=(CrafterBlock const&);
    CrafterBlock(CrafterBlock const&);
    CrafterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CrafterBlock@@UEAA@XZ
    virtual ~CrafterBlock() = default;

    // vIndex: 30, symbol: ?isContainerBlock@CrafterBlock@@UEBA_NXZ
    virtual bool isContainerBlock() const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@CrafterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@CrafterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 97, symbol: ?getPlacementBlock@CrafterBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@CrafterBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@CrafterBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 128, symbol: ?getVariant@CrafterBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 130, symbol: ?getRenderBlock@CrafterBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 131, symbol: ?getMappedFace@CrafterBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 132, symbol: ?getFaceFlip@CrafterBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar, class Block const&) const;

    // vIndex: 142, symbol: ?onRemove@CrafterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 145, symbol: ?onPlace@CrafterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 147, symbol: ?tick@CrafterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@CrafterBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@CrafterBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 152, symbol: ?allowStateMismatchOnPlacement@CrafterBlock@@UEBA_NAEBVBlock@@0@Z
    virtual bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // symbol: ??0CrafterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CrafterBlock(std::string const&, int);

    // symbol: ?getAttachedFace@CrafterBlock@@SAHH@Z
    MCAPI static int getAttachedFace(int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?dispenseFrom@CrafterBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void dispenseFrom(class BlockSource&, class BlockPos const&) const;

    // NOLINTEND
};
