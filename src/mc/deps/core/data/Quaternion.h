#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Quaternion {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_QUATERNION
public:
    Quaternion& operator=(Quaternion const&) = delete;
    Quaternion(Quaternion const&)            = delete;
    Quaternion()                             = delete;
#endif

public:
    /**
     * @symbol ??0Quaternion\@\@QEAA\@AEBVMatrix\@\@\@Z
     */
    MCAPI Quaternion(class Matrix const&);
};
