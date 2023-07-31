#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Cavifier {

public:
    // prevent constructor by default
    Cavifier& operator=(Cavifier const&) = delete;
    Cavifier(Cavifier const&)            = delete;
    Cavifier()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Cavifier\@\@QEAA\@AEBVCavifierNoises\@\@MM\@Z
     */
    MCAPI Cavifier(class CavifierNoises const&, float, float);
    /**
     * @symbol ?cavify\@Cavifier\@\@QEBAMVVec3\@\@HM\@Z
     */
    MCAPI float cavify(class Vec3, int, float) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getSpaghetti2d\@Cavifier\@\@AEBAMVVec3\@\@\@Z
     */
    MCAPI float _getSpaghetti2d(class Vec3) const;
    // NOLINTEND
};
