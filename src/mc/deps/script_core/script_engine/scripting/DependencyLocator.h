#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class DependencyLocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5eb976;
    // NOLINTEND

public:
    // prevent constructor by default
    DependencyLocator& operator=(DependencyLocator const&);
    DependencyLocator(DependencyLocator const&);
    DependencyLocator();
};

} // namespace Scripting
