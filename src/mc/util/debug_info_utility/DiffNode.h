#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

struct DiffNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk757f89;
    ::ll::UntypedStorage<8, 32> mUnk3176bd;
    ::ll::UntypedStorage<8, 24> mUnk10615d;
    ::ll::UntypedStorage<8, 8>  mUnk76a3fb;
    // NOLINTEND

public:
    // prevent constructor by default
    DiffNode& operator=(DiffNode const&);
    DiffNode(DiffNode const&);
    DiffNode();
};

} // namespace DebugInfoUtility
