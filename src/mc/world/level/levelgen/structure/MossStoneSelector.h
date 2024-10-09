#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

class MossStoneSelector : public ::BlockSelector {
public:
    // prevent constructor by default
    MossStoneSelector& operator=(MossStoneSelector const&);
    MossStoneSelector(MossStoneSelector const&);
    MossStoneSelector();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MossStoneSelector();

    // vIndex: 1
    virtual class Block const& next(class Random& random, int, int, int, bool) const;

    MCAPI MossStoneSelector(class Block const* cobblestone, class Block const* mossyCobblestone);

    // NOLINTEND
};
