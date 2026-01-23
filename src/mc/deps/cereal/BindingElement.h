#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct BindingElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk888f4d;
    ::ll::UntypedStorage<4, 4> mUnkd8e3a7;
    // NOLINTEND

public:
    // prevent constructor by default
    BindingElement& operator=(BindingElement const&);
    BindingElement(BindingElement const&);
    BindingElement();
};

} // namespace cereal::internal
