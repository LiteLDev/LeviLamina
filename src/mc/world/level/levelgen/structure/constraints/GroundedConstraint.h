#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

class GroundedConstraint {
public:
    // prevent constructor by default
    GroundedConstraint& operator=(GroundedConstraint const&);
    GroundedConstraint(GroundedConstraint const&);
    GroundedConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GroundedConstraint() = default;

    // vIndex: 1
    virtual bool isSatisfied(
        class IBlockWorldGenAPI const& target,
        class BlockPos const&          structurePos,
        ::Rotation const&              structureRot
    ) const;

    MCAPI explicit GroundedConstraint(class StructureTemplate& structure);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class StructureTemplate& structure);

    MCAPI bool isSatisfied$(
        class IBlockWorldGenAPI const& target,
        class BlockPos const&          structurePos,
        ::Rotation const&              structureRot
    ) const;

    // NOLINTEND
};
