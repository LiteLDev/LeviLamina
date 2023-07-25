#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundedConstraint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDEDCONSTRAINT
public:
    GroundedConstraint& operator=(GroundedConstraint const&) = delete;
    GroundedConstraint(GroundedConstraint const&)            = delete;
    GroundedConstraint()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isSatisfied\@GroundedConstraint\@\@UEBA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@\@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, enum class Rotation const&) const;
    /**
     * @symbol ??0GroundedConstraint\@\@QEAA\@AEAVStructureTemplate\@\@\@Z
     */
    MCAPI GroundedConstraint(class StructureTemplate&);
};
