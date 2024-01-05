#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

class BlockIntersectionConstraint {
public:
    // prevent constructor by default
    BlockIntersectionConstraint& operator=(BlockIntersectionConstraint const&);
    BlockIntersectionConstraint(BlockIntersectionConstraint const&);
    BlockIntersectionConstraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockIntersectionConstraint@@UEAA@XZ
    virtual ~BlockIntersectionConstraint() = default;

    // vIndex: 1, symbol:
    // ?isSatisfied@BlockIntersectionConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
    virtual bool isSatisfied(
        class IBlockWorldGenAPI const& target,
        class BlockPos const&          structurePos,
        ::Rotation const&              structureRot
    ) const;

    // symbol: ??0BlockIntersectionConstraint@@QEAA@AEAVStructureTemplate@@@Z
    MCAPI explicit BlockIntersectionConstraint(class StructureTemplate& structure);

    // NOLINTEND
};
