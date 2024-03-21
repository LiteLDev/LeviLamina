#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BarrelBlock : public ::FaceDirectionalBlock {
public:
    // prevent constructor by default
    BarrelBlock& operator=(BarrelBlock const&);
    BarrelBlock(BarrelBlock const&);
    BarrelBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BarrelBlock@@UEAA@XZ
    virtual ~BarrelBlock() = default;

    // vIndex: 30, symbol: ?isContainerBlock@BarrelBlock@@UEBA_NXZ
    virtual bool isContainerBlock() const;

    // vIndex: 46, symbol: ?isSignalSource@BarrelBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 110, symbol: ?hasComparatorSignal@BarrelBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@BarrelBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 128, symbol: ?getVariant@BarrelBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132, symbol: ?getFaceFlip@BarrelBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 142, symbol: ?onRemove@BarrelBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@BarrelBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@BarrelBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0BarrelBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI BarrelBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?setOpen@BarrelBlock@@SAX_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void setOpen(bool isOpen, class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
