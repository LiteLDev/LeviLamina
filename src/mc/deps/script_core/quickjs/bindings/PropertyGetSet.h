#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct PropertyGetSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8d8b75;
    ::ll::UntypedStorage<8, 8> mUnk150d8f;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyGetSet& operator=(PropertyGetSet const&);
    PropertyGetSet(PropertyGetSet const&);
    PropertyGetSet();
};

} // namespace Scripting::QuickJS
