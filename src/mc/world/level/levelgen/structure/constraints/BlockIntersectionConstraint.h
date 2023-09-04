#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

class BlockIntersectionConstraint {
public:
    // prevent constructor by default
    BlockIntersectionConstraint& operator=(BlockIntersectionConstraint const&) = delete;
    BlockIntersectionConstraint(BlockIntersectionConstraint const&)            = delete;
    BlockIntersectionConstraint()                                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?isSatisfied@BlockIntersectionConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
    virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, ::Rotation const&) const;

    // symbol: ??0BlockIntersectionConstraint@@QEAA@AEAVStructureTemplate@@@Z
    MCAPI BlockIntersectionConstraint(class StructureTemplate&);

    // NOLINTEND
};
