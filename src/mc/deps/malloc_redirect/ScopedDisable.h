#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::MallocRedirect {

class ScopedDisable {
public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::add_lvalue_reference_t<void (*)()> mDisableForCurrentThread();

    MCNAPI static ::std::add_lvalue_reference_t<void (*)()> mEnableForCurrentThread();
#endif
    // NOLINTEND
};

} // namespace Bedrock::MallocRedirect
