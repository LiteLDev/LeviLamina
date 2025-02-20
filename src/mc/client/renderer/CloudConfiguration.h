#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CloudConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk1a89eb;
    ::ll::UntypedStorage<4, 16> mUnk9473a6;
    ::ll::UntypedStorage<4, 16> mUnk7a96a5;
    ::ll::UntypedStorage<4, 16> mUnka61c4f;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudConfiguration& operator=(CloudConfiguration const&);
    CloudConfiguration(CloudConfiguration const&);
    CloudConfiguration();
};
