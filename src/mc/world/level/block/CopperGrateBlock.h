#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/CopperType.h"

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
    getCollisionShapeForCamera(class AABB& outAABB, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    MCAPI CopperGrateBlock(
        std::string const&        nameId,
        int                       id,
        ::CopperType              copperType,
        class HashedString const& previousVariant
    );

    MCAPI CopperGrateBlock(
        std::string const&        nameId,
        int                       id,
        ::CopperType              copperType,
        class HashedString const& previousVariant,
        class HashedString const& nextAgeVariant,
        class HashedString const& waxedVariant
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        std::string const&        nameId,
        int                       id,
        ::CopperType              copperType,
        class HashedString const& previousVariant,
        class HashedString const& nextAgeVariant,
        class HashedString const& waxedVariant
    );

    MCAPI void*
    ctor$(std::string const& nameId, int id, ::CopperType copperType, class HashedString const& previousVariant);

    MCAPI bool canContainLiquid$() const;

    MCAPI bool
    getCollisionShapeForCamera$(class AABB& outAABB, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // NOLINTEND
};
