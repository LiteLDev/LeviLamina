#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

struct DiffNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk757f89;
    ::ll::UntypedStorage<8, 32> mUnkaa6623;
    ::ll::UntypedStorage<8, 24> mUnk444384;
    ::ll::UntypedStorage<8, 8> mUnk76a3fb;
    // NOLINTEND

public:
    // prevent constructor by default
    DiffNode& operator=(DiffNode const&);
    DiffNode(DiffNode const&);
    DiffNode();

};

}
