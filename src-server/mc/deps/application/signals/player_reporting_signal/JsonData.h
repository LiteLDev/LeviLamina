#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct JsonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke8ea87;
    ::ll::UntypedStorage<8, 16> mUnk6e7679;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonData& operator=(JsonData const&);
    JsonData(JsonData const&);
    JsonData();

};

}
