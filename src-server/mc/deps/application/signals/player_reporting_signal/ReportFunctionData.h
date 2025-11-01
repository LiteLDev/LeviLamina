#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct ReportFunctionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9e209c;
    ::ll::UntypedStorage<8, 64> mUnk6b63f9;
    ::ll::UntypedStorage<1, 1> mUnkbae8df;
    // NOLINTEND

public:
    // prevent constructor by default
    ReportFunctionData& operator=(ReportFunctionData const&);
    ReportFunctionData(ReportFunctionData const&);
    ReportFunctionData();

};

}
