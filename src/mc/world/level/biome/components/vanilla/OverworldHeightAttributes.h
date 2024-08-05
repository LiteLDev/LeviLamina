#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OverworldHeightAttributes {
public:
    // prevent constructor by default
    OverworldHeightAttributes& operator=(OverworldHeightAttributes const&);
    OverworldHeightAttributes(OverworldHeightAttributes const&);
    OverworldHeightAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OverworldHeightAttributes() = default;

    // NOLINTEND
};
