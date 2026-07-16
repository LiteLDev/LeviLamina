#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextMolangVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc5e315;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMolangVersion& operator=(ContextMolangVersion const&);
    ContextMolangVersion(ContextMolangVersion const&);
    ContextMolangVersion();
};

} // namespace Scripting
