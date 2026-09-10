#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct CaseInsensitiveHash {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 operator()(::std::string_view s) const;
    // NOLINTEND
};

} // namespace Util
