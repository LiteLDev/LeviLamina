#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class MaterialPtr {
public:
    // prevent constructor by default
    MaterialPtr& operator=(MaterialPtr const&);
    MaterialPtr(MaterialPtr const&);
    MaterialPtr();
};

} // namespace mce
