#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct Texture2DArrayObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk10b9df;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture2DArrayObject& operator=(Texture2DArrayObject const&);
    Texture2DArrayObject(Texture2DArrayObject const&);
    Texture2DArrayObject();
};

} // namespace renoir
