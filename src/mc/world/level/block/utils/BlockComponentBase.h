#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockComponentBase {
public:
    // prevent constructor by default
    BlockComponentBase& operator=(BlockComponentBase const&);
    BlockComponentBase(BlockComponentBase const&);
    BlockComponentBase();

public:
    // NOLINTBEGIN
    // symbol: ??1BlockComponentBase@@UEAA@XZ
    MCVAPI ~BlockComponentBase();

    // NOLINTEND
};
