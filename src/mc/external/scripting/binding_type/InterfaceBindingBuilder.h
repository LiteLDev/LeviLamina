#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class InterfaceBindingBuilder {
public:
    // prevent constructor by default
    InterfaceBindingBuilder& operator=(InterfaceBindingBuilder const&);
    InterfaceBindingBuilder(InterfaceBindingBuilder const&);
    InterfaceBindingBuilder();
};

}; // namespace Scripting
