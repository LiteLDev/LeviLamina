#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Block {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_BLOCK
public:
    Block& operator=(Block const&) = delete;
    Block(Block const&)            = delete;
    Block()                        = delete;
#endif

public:
    /**
     * @symbol ??1Block\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~Block();
};

}; // namespace CodeBuilder
