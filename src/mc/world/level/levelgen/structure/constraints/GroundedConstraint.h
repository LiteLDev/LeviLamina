#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroundedConstraint {

public:
    // prevent constructor by default
    GroundedConstraint& operator=(GroundedConstraint const&) = delete;
    GroundedConstraint(GroundedConstraint const&)            = delete;
    GroundedConstraint()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isSatisfied\@GroundedConstraint\@\@UEBA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@\@Z
     */
    virtual bool
    isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, enum class Rotation const&) const; // NOLINT
    /**
     * @symbol ??0GroundedConstraint\@\@QEAA\@AEAVStructureTemplate\@\@\@Z
     */
    MCAPI GroundedConstraint(class StructureTemplate&); // NOLINT
};
