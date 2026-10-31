#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::MallocRedirect {

class ScopedDisable {
public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::add_lvalue_reference_t<void (*)()> mDisableForCurrentThread();

    MCAPI static ::std::add_lvalue_reference_t<void (*)()> mEnableForCurrentThread();
#endif
    // NOLINTEND
};

} // namespace Bedrock::MallocRedirect
