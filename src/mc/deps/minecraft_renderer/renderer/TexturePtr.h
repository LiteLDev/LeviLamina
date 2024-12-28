#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class TexturePtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3eb5ba;
    ::ll::UntypedStorage<8, 16> mUnkb09541;
    // NOLINTEND

public:
    // prevent constructor by default
    TexturePtr& operator=(TexturePtr const&);
    TexturePtr(TexturePtr const&);
    TexturePtr();
};

} // namespace mce
