#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct Sampler2DObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd39144;
    // NOLINTEND

public:
    // prevent constructor by default
    Sampler2DObject& operator=(Sampler2DObject const&);
    Sampler2DObject(Sampler2DObject const&);
    Sampler2DObject();
};

} // namespace renoir
