#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct HashPropertyBinding {
public:
    // prevent constructor by default
    HashPropertyBinding& operator=(HashPropertyBinding const&);
    HashPropertyBinding(HashPropertyBinding const&);
    HashPropertyBinding();
};

}; // namespace Scripting
