#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct JigsawSpace {
public:
    // prevent constructor by default
    JigsawSpace& operator=(JigsawSpace const&);
    JigsawSpace(JigsawSpace const&);
    JigsawSpace();

public:
    // NOLINTBEGIN
    MCAPI ~JigsawSpace();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace br::worldgen
