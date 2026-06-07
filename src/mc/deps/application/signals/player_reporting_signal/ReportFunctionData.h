#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct ReportFunctionData {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<1, 0> mUnk9e209c;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 64> mUnk9e209c;
#endif
    ::ll::UntypedStorage<8, 64> mUnk6b63f9;
    ::ll::UntypedStorage<1, 1>  mUnkbae8df;
    // NOLINTEND

public:
    // prevent constructor by default
    ReportFunctionData& operator=(ReportFunctionData const&);
    ReportFunctionData(ReportFunctionData const&);
    ReportFunctionData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ReportFunctionData();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace PlayerReportingSignal
