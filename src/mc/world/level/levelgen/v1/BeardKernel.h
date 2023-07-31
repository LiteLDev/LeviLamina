#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {

public:
    // prevent constructor by default
    BeardKernel& operator=(BeardKernel const&) = delete;
    BeardKernel(BeardKernel const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BeardKernel\@\@QEAA\@XZ
     */
    MCAPI BeardKernel();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?createBeardKernel\@BeardKernel\@\@AEAA?BV?$array\@M$0DGAA\@\@std\@\@XZ
     */
    MCAPI std::array<float, 13824> const createBeardKernel();
    // NOLINTEND
};
