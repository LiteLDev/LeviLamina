#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct TextureDescriptionIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc1c8e2;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureDescriptionIdentifier& operator=(TextureDescriptionIdentifier const&);
    TextureDescriptionIdentifier(TextureDescriptionIdentifier const&);
    TextureDescriptionIdentifier();
};

} // namespace dragon
