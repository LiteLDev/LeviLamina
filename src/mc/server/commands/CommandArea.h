#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandArea {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDAREA
public:
    CommandArea& operator=(CommandArea const&) = delete;
    CommandArea(CommandArea const&)            = delete;
    CommandArea()                              = delete;
#endif

public:
    /**
     * @symbol ?getDimensionBlockSource\@CommandArea\@\@QEAAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource& getDimensionBlockSource();
    /**
     * @symbol ??1CommandArea\@\@QEAA\@XZ
     */
    MCAPI ~CommandArea();
};
