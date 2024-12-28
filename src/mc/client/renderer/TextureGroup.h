#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class TextureGroup {
public:
    // prevent constructor by default
    TextureGroup& operator=(TextureGroup const&);
    TextureGroup(TextureGroup const&);
    TextureGroup();
};

} // namespace mce
