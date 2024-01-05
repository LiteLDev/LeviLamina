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
    // vIndex: 0, symbol: __gen_??1UnburiedConstraint@@UEAA@XZ
    virtual ~UnburiedConstraint() = default;

    // vIndex: 1, symbol: ?isSatisfied@UnburiedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
    virtual bool isSatisfied(
        class IBlockWorldGenAPI const& target,
        class BlockPos const&          structurePos,
        ::Rotation const&              structureRot
    ) const;

    // symbol: ??0UnburiedConstraint@@QEAA@AEAVStructureTemplate@@@Z
    MCAPI explicit UnburiedConstraint(class StructureTemplate& structure);

    // NOLINTEND
};
