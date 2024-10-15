#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

class BlockIntersectionConstraint {
public:
    // prevent constructor by default
    BlockIntersectionConstraint& operator=(BlockIntersectionConstraint const&);
    BlockIntersectionConstraint(BlockIntersectionConstraint const&);
    BlockIntersectionConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockIntersectionConstraint() = default;

    // vIndex: 1
    virtual bool isSatisfied(
        class IBlockWorldGenAPI const& target,
        class BlockPos const&          structurePos,
        ::Rotation const&              structureRot
    ) const;

    MCAPI explicit BlockIntersectionConstraint(class StructureTemplate& structure);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class StructureTemplate& structure);

    MCAPI bool isSatisfied$(
        class IBlockWorldGenAPI const& target,
        class BlockPos const&          structurePos,
        ::Rotation const&              structureRot
    ) const;

    // NOLINTEND
};
