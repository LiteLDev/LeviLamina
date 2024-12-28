#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct CaseInsensitiveHash {
public:
    // prevent constructor by default
    CaseInsensitiveHash& operator=(CaseInsensitiveHash const&);
    CaseInsensitiveHash(CaseInsensitiveHash const&);
    CaseInsensitiveHash();
};

} // namespace Util
