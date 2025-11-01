#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct InheritedReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6c4299;
    ::ll::UntypedStorage<8, 72> mUnk50693a;
    // NOLINTEND

public:
    // prevent constructor by default
    InheritedReference& operator=(InheritedReference const&);
    InheritedReference(InheritedReference const&);
    InheritedReference();

};

}
