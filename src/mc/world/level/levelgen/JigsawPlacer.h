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
    // symbol: ?tryPlacingChildren@JigsawPlacer@worldgen@br@@QEAAXUJigsawPieceState@23@@Z
    MCAPI void tryPlacingChildren(struct br::worldgen::JigsawPieceState);

    // symbol: ??1JigsawPlacer@worldgen@br@@QEAA@XZ
    MCAPI ~JigsawPlacer();

    // NOLINTEND
};

}; // namespace br::worldgen
