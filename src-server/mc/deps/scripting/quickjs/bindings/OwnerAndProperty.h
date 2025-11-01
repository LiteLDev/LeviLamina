#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct OwnerAndProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8e2d6b;
    ::ll::UntypedStorage<8, 8>  mUnk6c8fb2;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnerAndProperty& operator=(OwnerAndProperty const&);
    OwnerAndProperty(OwnerAndProperty const&);
    OwnerAndProperty();
};

} // namespace Scripting::QuickJS
