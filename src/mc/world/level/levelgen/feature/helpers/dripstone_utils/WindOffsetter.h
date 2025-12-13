#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DripstoneUtils {

class WindOffsetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5b4900;
    ::ll::UntypedStorage<4, 16> mUnk688166;
    // NOLINTEND

public:
    // prevent constructor by default
    WindOffsetter& operator=(WindOffsetter const&);
    WindOffsetter(WindOffsetter const&);
    WindOffsetter();
};

} // namespace DripstoneUtils
