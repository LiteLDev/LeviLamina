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

class MovingBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    MovingBlock& operator=(MovingBlock const&);
    MovingBlock(MovingBlock const&);
    MovingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MovingBlock@@UEAA@XZ
    virtual ~MovingBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@MovingBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@MovingBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 73, symbol:
    // ?updateEntityAfterFallOn@MovingBlock@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 96, symbol: ?asItemInstance@MovingBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 109, symbol: ?pushesUpFallingBlocks@MovingBlock@@UEBA_NXZ
    virtual bool pushesUpFallingBlocks() const;

    // vIndex: 148, symbol: ?onFallOn@MovingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void
    onFallOn(class BlockSource& region, class BlockPos const& pos, class Actor& entity, float fallDistance) const;

    // symbol: ??0MovingBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI MovingBlock(std::string const& nameId, int id);

    // NOLINTEND
};
