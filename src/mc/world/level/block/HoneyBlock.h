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

class HoneyBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    HoneyBlock& operator=(HoneyBlock const&);
    HoneyBlock(HoneyBlock const&);
    HoneyBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HoneyBlock@@UEAA@XZ
    virtual ~HoneyBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@HoneyBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@HoneyBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@HoneyBlock@@MEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 144, symbol: ?onStandOn@HoneyBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 156, symbol: ?getExtraRenderLayers@HoneyBlock@@UEBAHXZ
    virtual int getExtraRenderLayers() const;

    // symbol: ??0HoneyBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI HoneyBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?onFallOn@HoneyBlock@@QEBAXAEAUBlockFallOnEvent@BlockEvents@@@Z
    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

    // symbol: ?triggerSlidingDownEffects@HoneyBlock@@SAXAEAVActor@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI static void triggerSlidingDownEffects(class Actor& entity, class BlockPos const& pos, class Block const&);

    // NOLINTEND
};
