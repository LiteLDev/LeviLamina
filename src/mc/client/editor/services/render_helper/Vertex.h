#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::RenderHelper {

struct Vertex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk41c8a9;
    ::ll::UntypedStorage<4, 4> mUnk5bedb4;
    ::ll::UntypedStorage<4, 4> mUnk5289ef;
    ::ll::UntypedStorage<4, 4> mUnkd8dda7;
    // NOLINTEND

public:
    // prevent constructor by default
    Vertex& operator=(Vertex const&);
    Vertex(Vertex const&);
    Vertex();
};

} // namespace Editor::RenderHelper
