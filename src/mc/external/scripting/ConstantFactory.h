#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ConstantFactory {
public:
    // prevent constructor by default
    ConstantFactory& operator=(ConstantFactory const&);
    ConstantFactory(ConstantFactory const&);
    ConstantFactory();
};

}; // namespace Scripting
