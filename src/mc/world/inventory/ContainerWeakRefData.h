#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerWeakRefData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk115a78;
    ::ll::UntypedStorage<8, 8> mUnk12310b;
    ::ll::UntypedStorage<8, 8> mUnk5880c8;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerWeakRefData& operator=(ContainerWeakRefData const&);
    ContainerWeakRefData(ContainerWeakRefData const&);
    ContainerWeakRefData();
};
