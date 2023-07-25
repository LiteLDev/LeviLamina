#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class ClassBindingBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_CLASSBINDINGBUILDER
public:
    ClassBindingBuilder& operator=(ClassBindingBuilder const&) = delete;
    ClassBindingBuilder(ClassBindingBuilder const&)            = delete;
    ClassBindingBuilder()                                      = delete;
#endif

public:
};

}; // namespace Scripting
