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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isSatisfied@GroundedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
    virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, ::Rotation const&) const;

    // symbol: ??0GroundedConstraint@@QEAA@AEAVStructureTemplate@@@Z
    MCAPI explicit GroundedConstraint(class StructureTemplate&);

    // NOLINTEND
};
