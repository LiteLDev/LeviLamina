#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct UserShaderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc53200;
    // NOLINTEND

public:
    // prevent constructor by default
    UserShaderObject& operator=(UserShaderObject const&);
    UserShaderObject(UserShaderObject const&);
    UserShaderObject();
};

} // namespace renoir
