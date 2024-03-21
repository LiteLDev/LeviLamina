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

class DaylightDetectorBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    DaylightDetectorBlock& operator=(DaylightDetectorBlock const&);
    DaylightDetectorBlock(DaylightDetectorBlock const&);
    DaylightDetectorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DaylightDetectorBlock@@UEAA@XZ
    virtual ~DaylightDetectorBlock() = default;

    // vIndex: 23, symbol: ?canProvideSupport@DaylightDetectorBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 46, symbol: ?isSignalSource@DaylightDetectorBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@DaylightDetectorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 61, symbol: ?checkIsPathable@DaylightDetectorBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@DaylightDetectorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 128, symbol: ?getVariant@DaylightDetectorBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 142, symbol: ?onRemove@DaylightDetectorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@DaylightDetectorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@DaylightDetectorBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@DaylightDetectorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 163, symbol: ?updateSignalStrength@DaylightDetectorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void updateSignalStrength(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0DaylightDetectorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI DaylightDetectorBlock(std::string const& nameId, int id, bool isInverted);

    // NOLINTEND
};
