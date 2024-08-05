#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CopperGrateBlock : public ::CopperBlock {
public:
    // prevent constructor by default
    CopperGrateBlock& operator=(CopperGrateBlock const&);
    CopperGrateBlock(CopperGrateBlock const&);
    CopperGrateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CopperGrateBlock() = default;

    // vIndex: 6
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    MCAPI CopperGrateBlock(std::string const&, int, ::CopperType, class HashedString const&);

    MCAPI
    CopperGrateBlock(std::string const&, int, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
