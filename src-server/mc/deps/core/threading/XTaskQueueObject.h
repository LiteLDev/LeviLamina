#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueueObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk42ccf9;
    ::ll::UntypedStorage<4, 4> mUnk43a781;
    ::ll::UntypedStorage<8, 8> mUnk6fdb33;
    // NOLINTEND

public:
    // prevent constructor by default
    XTaskQueueObject& operator=(XTaskQueueObject const&);
    XTaskQueueObject(XTaskQueueObject const&);
    XTaskQueueObject();
};
