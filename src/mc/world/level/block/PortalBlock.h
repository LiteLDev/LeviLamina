#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/PortalAxis.h"
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

class PortalBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PortalBlock& operator=(PortalBlock const&);
    PortalBlock(PortalBlock const&);
    PortalBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PortalBlock@@UEAA@XZ
    virtual ~PortalBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@PortalBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@PortalBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@PortalBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 32, symbol: ?isWaterBlocking@PortalBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@PortalBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@PortalBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 83, symbol: ?mayPick@PortalBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const& region, class Block const& block, bool liquid) const;

    // vIndex: 92, symbol: ?neighborChanged@PortalBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@PortalBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@PortalBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 142, symbol: ?onRemove@PortalBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@PortalBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@PortalBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 162, symbol: ?entityInside@PortalBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const& pos, class Actor& entity) const;

    // symbol: ??0PortalBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PortalBlock(std::string const& nameId, int id);

    // symbol: ?tryMatchPortalRecordToFrameBlocksContainingPos@PortalBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void
    tryMatchPortalRecordToFrameBlocksContainingPos(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?trySpawnPigZombie@PortalBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@W4PortalAxis@@@Z
    MCAPI static void trySpawnPigZombie(class BlockSource& region, class BlockPos const& pos, ::PortalAxis axis);

    // symbol: ?trySpawnPortal@PortalBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool trySpawnPortal(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
