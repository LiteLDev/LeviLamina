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

class WaterlilyBlock : public ::BushBlock {
public:
    // prevent constructor by default
    WaterlilyBlock& operator=(WaterlilyBlock const&);
    WaterlilyBlock(WaterlilyBlock const&);
    WaterlilyBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WaterlilyBlock@@UEAA@XZ
    virtual ~WaterlilyBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@WaterlilyBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@WaterlilyBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 32, symbol: ?isWaterBlocking@WaterlilyBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 56, symbol: ?canContainLiquid@WaterlilyBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 86, symbol: ?mayPlaceOn@WaterlilyBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 120, symbol: ?getColor@WaterlilyBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 122, symbol: ?getColorAtPos@WaterlilyBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getColorAtPos(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 153, symbol: ?canSurvive@WaterlilyBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0WaterlilyBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI WaterlilyBlock(std::string const& nameId, int id);

    // NOLINTEND
};
