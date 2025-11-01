#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PlatformUtils {

struct PlatformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbd469d;
    ::ll::UntypedStorage<8, 32> mUnk4056c1;
    ::ll::UntypedStorage<8, 32> mUnk3510d6;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformData& operator=(PlatformData const&);
    PlatformData(PlatformData const&);
    PlatformData();

};

}
