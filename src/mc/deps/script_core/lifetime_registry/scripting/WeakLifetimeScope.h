#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class WeakLifetimeScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc28ee3;
    ::ll::UntypedStorage<4, 4> mUnk42d11b;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakLifetimeScope& operator=(WeakLifetimeScope const&);
    WeakLifetimeScope(WeakLifetimeScope const&);
    WeakLifetimeScope();
};

} // namespace Scripting
