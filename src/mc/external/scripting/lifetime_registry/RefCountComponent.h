#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::internal {

struct RefCountComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd9c39a;
    // NOLINTEND

public:
    // prevent constructor by default
    RefCountComponent& operator=(RefCountComponent const&);
    RefCountComponent(RefCountComponent const&);
    RefCountComponent();
};

} // namespace Scripting::internal
