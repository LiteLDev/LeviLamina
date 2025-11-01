#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class ScopedLoadTimeSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8f5ef2;
    ::ll::UntypedStorage<8, 48> mUnk517b73;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedLoadTimeSection& operator=(ScopedLoadTimeSection const&);
    ScopedLoadTimeSection(ScopedLoadTimeSection const&);
    ScopedLoadTimeSection();

};

}
