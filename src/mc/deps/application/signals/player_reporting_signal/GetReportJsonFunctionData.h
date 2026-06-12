#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct GetReportJsonFunctionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 64> mUnk9356ab;
    ::ll::UntypedStorage<1, 8>  mUnk6758be;
    // NOLINTEND

public:
    // prevent constructor by default
    GetReportJsonFunctionData& operator=(GetReportJsonFunctionData const&);
    GetReportJsonFunctionData(GetReportJsonFunctionData const&);
    GetReportJsonFunctionData();
};

} // namespace PlayerReportingSignal
