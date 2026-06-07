#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class ResourceServiceRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7dfc3d;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceServiceRenderContext& operator=(ResourceServiceRenderContext const&);
    ResourceServiceRenderContext(ResourceServiceRenderContext const&);
    ResourceServiceRenderContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ResourceServiceRenderContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
