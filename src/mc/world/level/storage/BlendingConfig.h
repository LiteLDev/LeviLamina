#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlendingConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7f4067;
    ::ll::UntypedStorage<4, 4> mUnk162ce3;
    ::ll::UntypedStorage<4, 4> mUnk7da46d;
    ::ll::UntypedStorage<4, 4> mUnk6e786d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingConfig& operator=(BlendingConfig const&);
    BlendingConfig(BlendingConfig const&);
    BlendingConfig();
};
