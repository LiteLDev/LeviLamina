#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class ErrorBindingBuilder {
public:
    // prevent constructor by default
    ErrorBindingBuilder& operator=(ErrorBindingBuilder const&);
    ErrorBindingBuilder(ErrorBindingBuilder const&);
    ErrorBindingBuilder();
};

}; // namespace Scripting
