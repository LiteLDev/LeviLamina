#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct BoolAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk53dd00;
    ::ll::UntypedStorage<4, 4> mUnk71d85e;
    // NOLINTEND

public:
    // prevent constructor by default
    BoolAttributeData& operator=(BoolAttributeData const&);
    BoolAttributeData(BoolAttributeData const&);
    BoolAttributeData();
};

} // namespace EAS
