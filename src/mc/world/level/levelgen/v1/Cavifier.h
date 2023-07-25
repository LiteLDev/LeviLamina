#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Cavifier {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAVIFIER
public:
    Cavifier& operator=(Cavifier const&) = delete;
    Cavifier(Cavifier const&)            = delete;
    Cavifier()                           = delete;
#endif

public:
    /**
     * @symbol ??0Cavifier\@\@QEAA\@AEBVCavifierNoises\@\@MM\@Z
     */
    MCAPI Cavifier(class CavifierNoises const&, float, float);
    /**
     * @symbol ?cavify\@Cavifier\@\@QEBAMVVec3\@\@HM\@Z
     */
    MCAPI float cavify(class Vec3, int, float) const;

    // private:
    /**
     * @symbol ?_getSpaghetti2d\@Cavifier\@\@AEBAMVVec3\@\@\@Z
     */
    MCAPI float _getSpaghetti2d(class Vec3) const;

private:
};
