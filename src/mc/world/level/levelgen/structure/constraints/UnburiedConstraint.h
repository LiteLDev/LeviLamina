#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UnburiedConstraint {

public:
    // prevent constructor by default
    UnburiedConstraint& operator=(UnburiedConstraint const&) = delete;
    UnburiedConstraint(UnburiedConstraint const&)            = delete;
    UnburiedConstraint()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isSatisfied\@UnburiedConstraint\@\@UEBA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@\@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const&, class BlockPos const&, enum class Rotation const&) const;
    /**
     * @symbol ??0UnburiedConstraint\@\@QEAA\@AEAVStructureTemplate\@\@\@Z
     */
    MCAPI UnburiedConstraint(class StructureTemplate&);
    // NOLINTEND
};
