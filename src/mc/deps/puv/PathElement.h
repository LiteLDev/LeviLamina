#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct PathElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4e5dd3;
    ::ll::UntypedStorage<4, 4>  mUnk38da85;
    ::ll::UntypedStorage<8, 32> mUnkaa0fe8;
    ::ll::UntypedStorage<4, 4>  mUnkec9b9a;
    // NOLINTEND

public:
    // prevent constructor by default
    PathElement& operator=(PathElement const&);
    PathElement(PathElement const&);
    PathElement();
};

} // namespace Puv::internal
