#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Quaternion {
public:
    // prevent constructor by default
    Quaternion& operator=(Quaternion const&);
    Quaternion(Quaternion const&);
    Quaternion();

public:
    // NOLINTBEGIN
    // symbol: ??0Quaternion@@QEAA@AEBVMatrix@@@Z
    MCAPI explicit Quaternion(class Matrix const& rot);

    // NOLINTEND
};
