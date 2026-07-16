#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class AlphaNum {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf8f124;
    ::ll::UntypedStorage<1, 32> mUnk9238d7;
    // NOLINTEND

public:
    // prevent constructor by default
    AlphaNum& operator=(AlphaNum const&);
    AlphaNum(AlphaNum const&);
    AlphaNum();
};

} // namespace absl
