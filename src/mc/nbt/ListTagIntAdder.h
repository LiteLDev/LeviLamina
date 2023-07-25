#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListTagIntAdder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LISTTAGINTADDER
public:
    ListTagIntAdder& operator=(ListTagIntAdder const&) = delete;
    ListTagIntAdder(ListTagIntAdder const&)            = delete;
    ListTagIntAdder()                                  = delete;
#endif

public:
    /**
     * @symbol ??RListTagIntAdder\@\@QEAAAEAV0\@H\@Z
     */
    MCAPI class ListTagIntAdder& operator()(int);
    /**
     * @symbol ??1ListTagIntAdder\@\@QEAA\@XZ
     */
    MCAPI ~ListTagIntAdder();
};
