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

class BeaconBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    BeaconBlock& operator=(BeaconBlock const&);
    BeaconBlock(BeaconBlock const&);
    BeaconBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BeaconBlock@@UEAA@XZ
    virtual ~BeaconBlock() = default;

    // vIndex: 56, symbol: ?canContainLiquid@BeaconBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 149, symbol: ?isInteractiveBlock@BeaconBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@BeaconBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0BeaconBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BeaconBlock(std::string const& nameId, int id);

    // NOLINTEND
};
