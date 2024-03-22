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

class EndGatewayBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    EndGatewayBlock& operator=(EndGatewayBlock const&);
    EndGatewayBlock(EndGatewayBlock const&);
    EndGatewayBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EndGatewayBlock@@UEAA@XZ
    virtual ~EndGatewayBlock() = default;

    // vIndex: 1, symbol:
    // ?newBlockEntity@EndGatewayBlock@@UEBA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@EndGatewayBlock@@UEBA_NAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 32, symbol: ?isWaterBlocking@EndGatewayBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@EndGatewayBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@EndGatewayBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 77, symbol: ?canRenderSelectionOverlay@EndGatewayBlock@@UEBA_NW4BlockRenderLayer@@@Z
    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    // vIndex: 95, symbol: ?asItemInstance@EndGatewayBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@EndGatewayBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0EndGatewayBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI EndGatewayBlock(std::string const& nameId, int id);

    // NOLINTEND
};
