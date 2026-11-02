#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct Capabilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk39a853;
    ::ll::UntypedStorage<8, 24> mUnkbafdf6;
    // NOLINTEND

public:
    // prevent constructor by default
    Capabilities& operator=(Capabilities const&);
    Capabilities(Capabilities const&);
    Capabilities();
};

} // namespace Editor::InteractiveTools
