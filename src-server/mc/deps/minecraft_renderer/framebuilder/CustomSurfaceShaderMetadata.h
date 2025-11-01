#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct CustomSurfaceShaderMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka60881;
    ::ll::UntypedStorage<4, 4> mUnk84d95e;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomSurfaceShaderMetadata& operator=(CustomSurfaceShaderMetadata const&);
    CustomSurfaceShaderMetadata(CustomSurfaceShaderMetadata const&);
    CustomSurfaceShaderMetadata();

};

}
