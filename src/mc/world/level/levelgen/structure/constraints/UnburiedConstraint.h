#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

class UnburiedConstraint {
public:
    // prevent constructor by default
    UnburiedConstraint& operator=(UnburiedConstraint const&);
    UnburiedConstraint(UnburiedConstraint const&);
    UnburiedConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnburiedConstraint() = default;

    // vIndex: 1
    virtual bool isSatisfied(
        class IBlockWorldGenAPI const& target,
        class BlockPos const&          structurePos,
        ::Rotation const&              structureRot
    ) const;

    MCAPI explicit UnburiedConstraint(class StructureTemplate& structure);

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
