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
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class SlimeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SlimeBlock& operator=(SlimeBlock const&);
    SlimeBlock(SlimeBlock const&);
    SlimeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SlimeBlock@@UEAA@XZ
    virtual ~SlimeBlock() = default;

    // vIndex: 73, symbol:
    // ?updateEntityAfterFallOn@SlimeBlock@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 74, symbol: ?isBounceBlock@SlimeBlock@@UEBA_NXZ
    virtual bool isBounceBlock() const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@SlimeBlock@@MEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 144, symbol: ?onStandOn@SlimeBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 156, symbol: ?getExtraRenderLayers@SlimeBlock@@UEBAHXZ
    virtual int getExtraRenderLayers() const;

    // symbol: ??0SlimeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI SlimeBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?onFallOn@SlimeBlock@@QEBAXAEAUBlockFallOnEvent@BlockEvents@@@Z
    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

    // NOLINTEND
};
