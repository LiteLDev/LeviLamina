#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class ByString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk32fe96;
    // NOLINTEND

public:
    // prevent constructor by default
    ByString& operator=(ByString const&);
    ByString(ByString const&);
    ByString();
};

} // namespace absl
