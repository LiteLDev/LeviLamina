#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListTagFloatAdder {

public:
    // prevent constructor by default
    ListTagFloatAdder& operator=(ListTagFloatAdder const&) = delete;
    ListTagFloatAdder(ListTagFloatAdder const&)            = delete;
    ListTagFloatAdder()                                    = delete;

public:
    /**
     * @symbol ??RListTagFloatAdder\@\@QEAAAEAV0\@M\@Z
     */
    MCAPI class ListTagFloatAdder& operator()(float); // NOLINT
    /**
     * @symbol ??1ListTagFloatAdder\@\@QEAA\@XZ
     */
    MCAPI ~ListTagFloatAdder(); // NOLINT
};
