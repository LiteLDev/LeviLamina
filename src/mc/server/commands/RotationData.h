#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RotationCommandUtils {

class RotationData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROTATIONCOMMANDUTILS_ROTATIONDATA
public:
    RotationData& operator=(RotationData const&) = delete;
    RotationData(RotationData const&)            = delete;
    RotationData()                               = delete;
#endif

public:
    /**
     * @symbol
     * ??0RotationData\@RotationCommandUtils\@\@QEAA\@AEBVRelativeFloat\@\@0AEBV?$optional\@VVec2\@\@\@std\@\@\@Z
     */
    MCAPI RotationData(class RelativeFloat const&, class RelativeFloat const&, class std::optional<class Vec2> const&);
};

}; // namespace RotationCommandUtils
