#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class ClassBindingBuilder {

public:
    // prevent constructor by default
    ClassBindingBuilder& operator=(ClassBindingBuilder const&) = delete;
    ClassBindingBuilder(ClassBindingBuilder const&)            = delete;
    ClassBindingBuilder()                                      = delete;
};

}; // namespace Scripting
