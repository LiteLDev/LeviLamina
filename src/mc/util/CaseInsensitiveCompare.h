#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct CaseInsensitiveCompare {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool operator()(::std::string_view a, ::std::string_view b) const;
#endif
    // NOLINTEND
};

} // namespace Util
