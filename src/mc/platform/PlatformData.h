#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PlatformUtils {

struct PlatformData {
public:
    // prevent constructor by default
    PlatformData& operator=(PlatformData const&);
    PlatformData(PlatformData const&);
    PlatformData();

public:
    // NOLINTBEGIN
    MCAPI static struct Bedrock::PlatformUtils::PlatformData& get();

    // NOLINTEND
};

}; // namespace Bedrock::PlatformUtils
