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
    /**
     * @symbol ??1Block\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~Block(); // NOLINT
};

}; // namespace CodeBuilder
