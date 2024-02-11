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

class AmethystBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    AmethystBlock& operator=(AmethystBlock const&);
    AmethystBlock(AmethystBlock const&);
    AmethystBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AmethystBlock@@UEAA@XZ
    virtual ~AmethystBlock();

    // vIndex: 17, symbol: ?onProjectileHit@AmethystBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const&) const;

    // vIndex: 48, symbol: ?isSilentWhenJumpingOff@AmethystBlock@@UEBA_NXZ
    virtual bool isSilentWhenJumpingOff() const;

    // symbol: ??0AmethystBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI AmethystBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
