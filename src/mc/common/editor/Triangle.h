#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct Triangle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb36b8f;
    ::ll::UntypedStorage<4, 12> mUnkf39453;
    ::ll::UntypedStorage<4, 12> mUnkac49ae;
    ::ll::UntypedStorage<4, 12> mUnk128ccd;
    // NOLINTEND

public:
    // prevent constructor by default
    Triangle& operator=(Triangle const&);
    Triangle(Triangle const&);
    Triangle();
};

} // namespace Editor::Mesh
