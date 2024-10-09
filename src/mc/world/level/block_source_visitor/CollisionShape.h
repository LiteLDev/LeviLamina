#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockSourceVisitor {

struct CollisionShape {
public:
    // prevent constructor by default
    CollisionShape& operator=(CollisionShape const&);
    CollisionShape(CollisionShape const&);
    CollisionShape();
};

}; // namespace BlockSourceVisitor
