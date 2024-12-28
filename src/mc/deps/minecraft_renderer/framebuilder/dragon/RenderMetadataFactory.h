#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

class RenderMetadataFactory {
public:
    // prevent constructor by default
    RenderMetadataFactory& operator=(RenderMetadataFactory const&);
    RenderMetadataFactory(RenderMetadataFactory const&);
    RenderMetadataFactory();
};

} // namespace dragon
