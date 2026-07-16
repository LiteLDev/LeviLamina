#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersistentBlendData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkfb2e3a;
    ::ll::UntypedStorage<2, 32> mUnkf84333;
    ::ll::UntypedStorage<1, 1>  mUnk5def06;
    ::ll::UntypedStorage<1, 1>  mUnk68d508;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistentBlendData& operator=(PersistentBlendData const&);
    PersistentBlendData(PersistentBlendData const&);
    PersistentBlendData();
};
