#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::mesh {

struct MeshDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkd6e824;
    ::ll::UntypedStorage<4, 12> mUnkeb1f9c;
    ::ll::UntypedStorage<4, 12> mUnkf62b48;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshDescription& operator=(MeshDescription const&);
    MeshDescription(MeshDescription const&);
    MeshDescription();
};

} // namespace dragon::mesh
