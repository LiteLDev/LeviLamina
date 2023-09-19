#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandArea {
public:
    // prevent constructor by default
    CommandArea& operator=(CommandArea const&);
    CommandArea(CommandArea const&);
    CommandArea();

public:
    // NOLINTBEGIN
    // symbol: ?getDimensionBlockSource@CommandArea@@QEAAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getDimensionBlockSource();

    // symbol: ??1CommandArea@@QEAA@XZ
    MCAPI ~CommandArea();

    // NOLINTEND
};
