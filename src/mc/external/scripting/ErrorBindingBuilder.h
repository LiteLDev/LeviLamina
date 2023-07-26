#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class ErrorBindingBuilder {

public:
    // prevent constructor by default
    ErrorBindingBuilder& operator=(ErrorBindingBuilder const&) = delete;
    ErrorBindingBuilder(ErrorBindingBuilder const&)            = delete;
    ErrorBindingBuilder()                                      = delete;
};

}; // namespace Scripting
