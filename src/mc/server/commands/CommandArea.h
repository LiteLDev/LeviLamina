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
    // symbol: ??0CommandArea@@QEAA@V?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@@Z
    MCAPI explicit CommandArea(std::unique_ptr<class ChunkViewSource>);

    // symbol: ?getDimensionBlockSource@CommandArea@@QEAAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getDimensionBlockSource();

    // symbol: ??1CommandArea@@QEAA@XZ
    MCAPI ~CommandArea();

    // NOLINTEND
};
