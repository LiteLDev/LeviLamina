#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Quaternion {

public:
    // prevent constructor by default
    Quaternion& operator=(Quaternion const&) = delete;
    Quaternion(Quaternion const&)            = delete;
    Quaternion()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Quaternion\@\@QEAA\@AEBVMatrix\@\@\@Z
     */
    MCAPI Quaternion(class Matrix const&);
    // NOLINTEND
};
