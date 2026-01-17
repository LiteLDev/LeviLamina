#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct Color {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2726d2;
    ::ll::UntypedStorage<4, 4> mUnk3af1fa;
    ::ll::UntypedStorage<4, 4> mUnk9a2e77;
    ::ll::UntypedStorage<4, 4> mUnk4602e8;
    // NOLINTEND

public:
    // prevent constructor by default
    Color& operator=(Color const&);
    Color(Color const&);
    Color();
};

} // namespace renoir
