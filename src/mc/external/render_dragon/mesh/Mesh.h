#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::mesh {

class Mesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnka798ae;
    ::ll::UntypedStorage<8, 24> mUnkf18398;
    ::ll::UntypedStorage<8, 24> mUnkf5b9c3;
    ::ll::UntypedStorage<8, 24> mUnk4000f3;
    // NOLINTEND

public:
    // prevent constructor by default
    Mesh& operator=(Mesh const&);
    Mesh(Mesh const&);
    Mesh();
};

} // namespace dragon::mesh
