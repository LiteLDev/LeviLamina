#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct EqualPropertyBinding {
public:
    // prevent constructor by default
    EqualPropertyBinding& operator=(EqualPropertyBinding const&);
    EqualPropertyBinding(EqualPropertyBinding const&);
    EqualPropertyBinding();
};

}; // namespace Scripting
