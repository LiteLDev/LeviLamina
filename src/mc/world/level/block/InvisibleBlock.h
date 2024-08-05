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
    // vIndex: 0
    virtual ~InvisibleBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI InvisibleBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
