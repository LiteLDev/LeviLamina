#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class InterfaceBindingBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_INTERFACEBINDINGBUILDER
public:
    InterfaceBindingBuilder& operator=(InterfaceBindingBuilder const&) = delete;
    InterfaceBindingBuilder(InterfaceBindingBuilder const&)            = delete;
    InterfaceBindingBuilder()                                          = delete;
#endif

public:
};

}; // namespace Scripting
