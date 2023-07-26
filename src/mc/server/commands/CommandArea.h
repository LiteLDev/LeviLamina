#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandArea {

public:
    // prevent constructor by default
    CommandArea& operator=(CommandArea const&) = delete;
    CommandArea(CommandArea const&)            = delete;
    CommandArea()                              = delete;

public:
    /**
     * @symbol ?getDimensionBlockSource\@CommandArea\@\@QEAAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource& getDimensionBlockSource(); // NOLINT
    /**
     * @symbol ??1CommandArea\@\@QEAA\@XZ
     */
    MCAPI ~CommandArea(); // NOLINT
};
