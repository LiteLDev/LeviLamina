#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureDescription.h"

namespace mce {

struct TextureDescription : public ::cg::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk8f5d64;
    ::ll::UntypedStorage<4, 16> mUnk6341b7;
    ::ll::UntypedStorage<4, 4>  mUnkf4bbc8;
    ::ll::UntypedStorage<1, 1>  mUnkf7d7e9;
    ::ll::UntypedStorage<4, 4>  mUnkb7a3b3;
    ::ll::UntypedStorage<1, 1>  mUnk665f38;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureDescription& operator=(TextureDescription const&);
    TextureDescription(TextureDescription const&);
    TextureDescription();
};

} // namespace mce
