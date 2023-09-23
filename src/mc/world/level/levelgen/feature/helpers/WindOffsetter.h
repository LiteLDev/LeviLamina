#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DripstoneUtils {

class WindOffsetter {
public:
    // prevent constructor by default
    WindOffsetter& operator=(WindOffsetter const&);
    WindOffsetter(WindOffsetter const&);
    WindOffsetter();
};

}; // namespace DripstoneUtils
