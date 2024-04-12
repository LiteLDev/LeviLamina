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
    // vIndex: 0, symbol: ??1BlockComponentBase@@UEAA@XZ
    virtual ~BlockComponentBase();

    // NOLINTEND
};
