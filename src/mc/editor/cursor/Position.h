#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Cursor {

struct Position {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnke3ebf3;
    ::ll::UntypedStorage<1, 1>  mUnkfb4d2e;
    // NOLINTEND

public:
    // prevent constructor by default
    Position& operator=(Position const&);
    Position(Position const&);
    Position();
};

} // namespace Editor::Cursor
