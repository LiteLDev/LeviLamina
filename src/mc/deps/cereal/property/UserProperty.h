#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct UserProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke57c76;
    ::ll::UntypedStorage<8, 8>  mUnk661390;
    // NOLINTEND

public:
    // prevent constructor by default
    UserProperty& operator=(UserProperty const&);
    UserProperty(UserProperty const&);
    UserProperty();
};

} // namespace cereal::internal
