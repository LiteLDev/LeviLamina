#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextIdFreeList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnka4bc55;
    ::ll::UntypedStorage<1, 1>  mUnk2fc079;
    ::ll::UntypedStorage<8, 24> mUnk35b54c;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextIdFreeList& operator=(ContextIdFreeList const&);
    ContextIdFreeList(ContextIdFreeList const&);
    ContextIdFreeList();
};

} // namespace Scripting
