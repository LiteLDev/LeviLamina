#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

class GroundedConstraint {
public:
    // prevent constructor by default
    GroundedConstraint& operator=(GroundedConstraint const&);
    GroundedConstraint(GroundedConstraint const&);
    GroundedConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GroundedConstraint@@UEAA@XZ
    virtual ~GroundedConstraint() = default;

    // vIndex: 1, symbol: ?isSatisfied@GroundedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
    virtual bool isSatisfied(
        class IBlockWorldGenAPI const& target,
        class BlockPos const&          structurePos,
        ::Rotation const&              structureRot
    ) const;

    // symbol: ??0GroundedConstraint@@QEAA@AEAVStructureTemplate@@@Z
    MCAPI explicit GroundedConstraint(class StructureTemplate& structure);

    // NOLINTEND
};
