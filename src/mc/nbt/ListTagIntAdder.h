#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListTagIntAdder {

public:
    // prevent constructor by default
    ListTagIntAdder& operator=(ListTagIntAdder const&) = delete;
    ListTagIntAdder(ListTagIntAdder const&)            = delete;
    ListTagIntAdder()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??RListTagIntAdder\@\@QEAAAEAV0\@H\@Z
     */
    MCAPI class ListTagIntAdder& operator()(int);
    /**
     * @symbol ??1ListTagIntAdder\@\@QEAA\@XZ
     */
    MCAPI ~ListTagIntAdder();
    // NOLINTEND
};
