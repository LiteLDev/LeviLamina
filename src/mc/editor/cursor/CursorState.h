#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Cursor {

struct CursorState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 20> mUnk143b53;
    ::ll::UntypedStorage<4, 20> mUnk8aca76;
    ::ll::UntypedStorage<4, 4>  mUnkb53327;
    ::ll::UntypedStorage<4, 4>  mUnkbc7588;
    ::ll::UntypedStorage<1, 1>  mUnkf397d2;
    ::ll::UntypedStorage<4, 4>  mUnk92d3fd;
    ::ll::UntypedStorage<1, 1>  mUnk46d8c6;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorState& operator=(CursorState const&);
    CursorState(CursorState const&);
    CursorState();
};

} // namespace Editor::Cursor
