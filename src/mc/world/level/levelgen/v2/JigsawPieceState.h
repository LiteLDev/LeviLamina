#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct JigsawPieceState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb3c2f2;
    ::ll::UntypedStorage<8, 8> mUnk33b215;
    ::ll::UntypedStorage<4, 4> mUnk73dc0a;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPieceState& operator=(JigsawPieceState const&);
    JigsawPieceState(JigsawPieceState const&);
    JigsawPieceState();
};

} // namespace br::worldgen
