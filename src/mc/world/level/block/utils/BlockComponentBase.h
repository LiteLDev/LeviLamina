#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockComponentBase {
public:
    // prevent constructor by default
    BlockComponentBase& operator=(BlockComponentBase const&) = delete;
    BlockComponentBase(BlockComponentBase const&)            = delete;
    BlockComponentBase()                                     = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1BlockComponentBase@@UEAA@XZ
    MCVAPI ~BlockComponentBase();

    // NOLINTEND
};
