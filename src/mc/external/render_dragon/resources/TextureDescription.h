#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureDescription.h"

namespace dragon {

struct TextureDescription : public ::cg::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk10aa4c;
    ::ll::UntypedStorage<4, 4>  mUnk932a7e;
    ::ll::UntypedStorage<1, 2>  mUnkd1c7ad;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureDescription& operator=(TextureDescription const&);
    TextureDescription(TextureDescription const&);
    TextureDescription();
};

} // namespace dragon
