#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CoralFan : public ::BushBlock {
public:
    // prevent constructor by default
    CoralFan& operator=(CoralFan const&);
    CoralFan(CoralFan const&);
    CoralFan();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CoralFan@@UEAA@XZ
    virtual ~CoralFan();

    // vIndex: 5, symbol:
    // ?getCollisionShape@CoralFan@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol: ?getOutline@CoralFan@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 16, symbol: ?randomlyModifyPosition@CoralFan@@UEBA?AVVec3@@AEBVBlockPos@@@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 32, symbol: ?isWaterBlocking@CoralFan@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 49, symbol: ?isValidAuxValue@CoralFan@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 56, symbol: ?canContainLiquid@CoralFan@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@CoralFan@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 80, symbol: ?mayConsumeFertilizer@CoralFan@@UEBA_NAEAVBlockSource@@@Z
    virtual bool mayConsumeFertilizer(class BlockSource& region) const;

    // vIndex: 86, symbol: ?mayPlaceOn@CoralFan@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@CoralFan@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96, symbol: ?asItemInstance@CoralFan@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119, symbol:
    // ?buildDescriptionId@CoralFan@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@CoralFan@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 121, symbol: ?getColor@CoralFan@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 122, symbol: ?getColor@CoralFan@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 129, symbol: ?getVariant@CoralFan@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 147, symbol: ?onPlace@CoralFan@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 162, symbol: ?getMapColor@CoralFan@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 168, symbol: ?checkAlive@CoralFan@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void checkAlive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0CoralFan@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CoralFan(std::string const& nameId, int id);

    // symbol: ?CORAL_FAN_NAMES@CoralFan@@2QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const CORAL_FAN_NAMES[];

    // symbol: ?CORAL_FAN_NAMES_COUNT@CoralFan@@2HB
    MCAPI static int const CORAL_FAN_NAMES_COUNT;

    // NOLINTEND
};
