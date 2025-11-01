#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst {

struct QueueConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb55726;
    ::ll::UntypedStorage<4, 4> mUnk2500c7;
    ::ll::UntypedStorage<8, 8> mUnk25f13d;
    ::ll::UntypedStorage<8, 8> mUnk90c92e;
    ::ll::UntypedStorage<8, 24> mUnk323b5c;
    ::ll::UntypedStorage<8, 24> mUnkb6bb39;
    // NOLINTEND

public:
    // prevent constructor by default
    QueueConfig& operator=(QueueConfig const&);
    QueueConfig(QueueConfig const&);
    QueueConfig();

};

}
