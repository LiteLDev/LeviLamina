#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageDescription.h"

namespace cg {

struct TextureDescription : public ::cg::ImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk60201e;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureDescription& operator=(TextureDescription const&);
    TextureDescription(TextureDescription const&);
    TextureDescription();
};

} // namespace cg
