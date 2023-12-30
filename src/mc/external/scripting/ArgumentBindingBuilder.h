#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class ArgumentBindingBuilder {
public:
    // prevent constructor by default
    ArgumentBindingBuilder& operator=(ArgumentBindingBuilder const&);
    ArgumentBindingBuilder(ArgumentBindingBuilder const&);
    ArgumentBindingBuilder();
};

}; // namespace Scripting
