#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Block {

public:
    // prevent constructor by default
    Block& operator=(Block const&) = delete;
    Block(Block const&)            = delete;
    Block()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1Block\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~Block();
    // NOLINTEND
};

}; // namespace CodeBuilder
