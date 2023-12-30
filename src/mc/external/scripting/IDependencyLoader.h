#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDependencyLoader {
public:
    // prevent constructor by default
    IDependencyLoader& operator=(IDependencyLoader const&);
    IDependencyLoader(IDependencyLoader const&);
    IDependencyLoader();
};

}; // namespace Scripting
