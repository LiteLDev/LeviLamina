#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

struct BlockStatePair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd080d0;
    ::ll::UntypedStorage<8, 40> mUnk42df15;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStatePair& operator=(BlockStatePair const&);
    BlockStatePair(BlockStatePair const&);
    BlockStatePair();
};

} // namespace Editor::Brush
