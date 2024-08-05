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
};

}; // namespace br::worldgen
