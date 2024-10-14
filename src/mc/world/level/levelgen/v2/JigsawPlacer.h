#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct JigsawPieceState; }
// clang-format on

namespace br::worldgen {

class JigsawPlacer {
public:
    // prevent constructor by default
    JigsawPlacer& operator=(JigsawPlacer const&);
    JigsawPlacer(JigsawPlacer const&);
    JigsawPlacer();

public:
    // NOLINTBEGIN
    MCAPI void tryPlacingChildren(struct br::worldgen::JigsawPieceState state);

    MCAPI ~JigsawPlacer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace br::worldgen
