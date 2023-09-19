#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

class UnburiedConstraint {
public:
    // prevent constructor by default
    UnburiedConstraint& operator=(UnburiedConstraint const&);
    UnburiedConstraint(UnburiedConstraint const&);
    UnburiedConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isSatisfied@UnburiedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
    virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, ::Rotation const&) const;

    // symbol: ??0UnburiedConstraint@@QEAA@AEAVStructureTemplate@@@Z
    MCAPI explicit UnburiedConstraint(class StructureTemplate&);

    // NOLINTEND
};
