#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct StringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5bfd49;
    ::ll::UntypedStorage<8, 32> mUnkaac53f;
    // NOLINTEND

public:
    // prevent constructor by default
    StringData& operator=(StringData const&);
    StringData(StringData const&);
    StringData();

};

}
