#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockSourceVisitor {

struct CollisionShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke17b59;
    ::ll::UntypedStorage<4, 24> mUnk2ec68c;
    ::ll::UntypedStorage<4, 12> mUnkf7ce13;
    ::ll::UntypedStorage<1, 1>  mUnkd77dd4;
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionShape& operator=(CollisionShape const&);
    CollisionShape(CollisionShape const&);
    CollisionShape();
};

} // namespace BlockSourceVisitor
