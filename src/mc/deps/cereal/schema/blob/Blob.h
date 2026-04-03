#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct Blob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1b6570;
    ::ll::UntypedStorage<8, 8>  mUnk6b43ce;
    // NOLINTEND

public:
    // prevent constructor by default
    Blob& operator=(Blob const&);
    Blob(Blob const&);
    Blob();
};

} // namespace cereal
