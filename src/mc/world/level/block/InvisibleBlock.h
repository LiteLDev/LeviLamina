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

class InvisibleBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    InvisibleBlock& operator=(InvisibleBlock const&);
    InvisibleBlock(InvisibleBlock const&);
    InvisibleBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InvisibleBlock@@UEAA@XZ
    virtual ~InvisibleBlock() = default;

    // vIndex: 4, symbol:
    // ?clip@InvisibleBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // symbol:
    // ??0InvisibleBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI InvisibleBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
