#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct VertexBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2a4f49;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexBufferObject& operator=(VertexBufferObject const&);
    VertexBufferObject(VertexBufferObject const&);
    VertexBufferObject();
};

} // namespace renoir
