#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

class CursorGraphics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk32d6c6;
    ::ll::UntypedStorage<4, 16>  mUnk1592b1;
    ::ll::UntypedStorage<8, 104> mUnkcf4394;
    ::ll::UntypedStorage<4, 16>  mUnk3940c8;
    ::ll::UntypedStorage<1, 1>   mUnka54768;
    ::ll::UntypedStorage<4, 8>   mUnkef5c87;
    ::ll::UntypedStorage<4, 12>  mUnkf45b08;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorGraphics& operator=(CursorGraphics const&);
    CursorGraphics(CursorGraphics const&);
    CursorGraphics();
};

} // namespace Editor
