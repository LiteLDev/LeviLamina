#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDKERNEL
public:
    BeardKernel& operator=(BeardKernel const&) = delete;
    BeardKernel(BeardKernel const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BeardKernel\@\@QEAA\@XZ
     */
    MCAPI BeardKernel();

    // private:
    /**
     * @symbol ?createBeardKernel\@BeardKernel\@\@AEAA?BV?$array\@M$0DGAA\@\@std\@\@XZ
     */
    MCAPI class std::array<float, 13824> const createBeardKernel();
};
