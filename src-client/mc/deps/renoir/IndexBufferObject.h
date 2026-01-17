#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct IndexBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkca5503;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexBufferObject& operator=(IndexBufferObject const&);
    IndexBufferObject(IndexBufferObject const&);
    IndexBufferObject();
};

} // namespace renoir
