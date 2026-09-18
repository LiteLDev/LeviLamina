#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct NativeBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk846180;
    ::ll::UntypedStorage<8, 8> mUnk815803;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBounds& operator=(NativeBounds const&);
    NativeBounds(NativeBounds const&);
    NativeBounds();
};

} // namespace Scripting::QuickJS
