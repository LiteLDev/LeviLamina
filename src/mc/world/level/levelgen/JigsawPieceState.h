#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct JigsawPieceState {
public:
    // prevent constructor by default
    JigsawPieceState& operator=(JigsawPieceState const&);
    JigsawPieceState(JigsawPieceState const&);
    JigsawPieceState();
};

}; // namespace br::worldgen
