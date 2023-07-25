#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockIntersectionConstraint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKINTERSECTIONCONSTRAINT
public:
    BlockIntersectionConstraint& operator=(BlockIntersectionConstraint const&) = delete;
    BlockIntersectionConstraint(BlockIntersectionConstraint const&)            = delete;
    BlockIntersectionConstraint()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?isSatisfied\@BlockIntersectionConstraint\@\@UEBA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@\@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, enum class Rotation const&) const;
    /**
     * @symbol ??0BlockIntersectionConstraint\@\@QEAA\@AEAVStructureTemplate\@\@\@Z
     */
    MCAPI BlockIntersectionConstraint(class StructureTemplate&);
};
