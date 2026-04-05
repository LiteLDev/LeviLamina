#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct Texture2DObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb1bea9;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture2DObject& operator=(Texture2DObject const&);
    Texture2DObject(Texture2DObject const&);
    Texture2DObject();
};

} // namespace renoir
