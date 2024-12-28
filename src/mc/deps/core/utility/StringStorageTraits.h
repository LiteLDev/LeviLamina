#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Detail {

class StringStorageTraits {
public:
    // prevent constructor by default
    StringStorageTraits& operator=(StringStorageTraits const&);
    StringStorageTraits(StringStorageTraits const&);
    StringStorageTraits();
};

} // namespace Util::Detail
