#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/ListTag.h"

class ListTagIntAdder {

public:
    std::unique_ptr<ListTag> mTag;
    /**
     * @symbol ??RListTagIntAdder\@\@QEAAAEAV0\@H\@Z
     */
    MCAPI class ListTagIntAdder& operator()(int); // NOLINT
    /**
     * @symbol ??1ListTagIntAdder\@\@QEAA\@XZ
     */
    MCAPI ~ListTagIntAdder(); // NOLINT
};
