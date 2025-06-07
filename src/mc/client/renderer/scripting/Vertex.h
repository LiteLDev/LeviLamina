#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::RenderHelper {

struct Vertex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd51bef;
    ::ll::UntypedStorage<4, 4> mUnkbe39c0;
    ::ll::UntypedStorage<4, 4> mUnk996c44;
    ::ll::UntypedStorage<4, 4> mUnkddd175;
    // NOLINTEND

public:
    // prevent constructor by default
    Vertex& operator=(Vertex const&);
    Vertex(Vertex const&);
    Vertex();
};

} // namespace Scripting::RenderHelper
