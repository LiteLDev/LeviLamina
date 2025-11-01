#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct DecompressedImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdf6b61;
    ::ll::UntypedStorage<1, 1> mUnkeaa7e1;
    ::ll::UntypedStorage<4, 4> mUnk5e6c11;
    ::ll::UntypedStorage<4, 4> mUnkb4b71a;
    // NOLINTEND

public:
    // prevent constructor by default
    DecompressedImageDescription& operator=(DecompressedImageDescription const&);
    DecompressedImageDescription(DecompressedImageDescription const&);
    DecompressedImageDescription();

};

}
