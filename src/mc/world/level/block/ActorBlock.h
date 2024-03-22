#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class ActorBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ActorBlock& operator=(ActorBlock const&);
    ActorBlock(ActorBlock const&);
    ActorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorBlock@@UEAA@XZ
    virtual ~ActorBlock();

    // vIndex: 92, symbol: ?neighborChanged@ActorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 104, symbol: ?triggerEvent@ActorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
    virtual void triggerEvent(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0ActorBlock@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI ActorBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
