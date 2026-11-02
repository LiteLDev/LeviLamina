#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct FloodResultStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb80e91;
    ::ll::UntypedStorage<4, 64> mUnk5722a0;
    ::ll::UntypedStorage<8, 8>  mUnkdc2031;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodResultStream& operator=(FloodResultStream const&);
    FloodResultStream(FloodResultStream const&);
    FloodResultStream();
};

} // namespace Editor::InteractiveTools
