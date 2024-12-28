#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PolygonQuad {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 80> mUnk86b1c1;
    // NOLINTEND

public:
    // prevent constructor by default
    PolygonQuad& operator=(PolygonQuad const&);
    PolygonQuad(PolygonQuad const&);
    PolygonQuad();
};
