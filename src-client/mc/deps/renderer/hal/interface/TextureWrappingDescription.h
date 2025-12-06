#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct TextureWrappingDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc32ba4;
    ::ll::UntypedStorage<1, 1> mUnkfbcc72;
    ::ll::UntypedStorage<1, 1> mUnk9f2a79;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureWrappingDescription& operator=(TextureWrappingDescription const&);
    TextureWrappingDescription(TextureWrappingDescription const&);
    TextureWrappingDescription();
};

} // namespace mce
