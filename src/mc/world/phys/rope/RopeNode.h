#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RopeNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk16d274;
    ::ll::UntypedStorage<4, 12> mUnkf7d6f6;
    ::ll::UntypedStorage<1, 1>  mUnk5dc17b;
    // NOLINTEND

public:
    // prevent constructor by default
    RopeNode& operator=(RopeNode const&);
    RopeNode(RopeNode const&);
    RopeNode();
};
