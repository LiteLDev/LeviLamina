#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct OwnedProperty {
public:
    // prevent constructor by default
    OwnedProperty& operator=(OwnedProperty const&);
    OwnedProperty(OwnedProperty const&);
    OwnedProperty();

public:
    // NOLINTBEGIN
    MCAPI ~OwnedProperty();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
