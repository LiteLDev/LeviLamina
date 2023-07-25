#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class ErrorBindingBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_ERRORBINDINGBUILDER
public:
    ErrorBindingBuilder& operator=(ErrorBindingBuilder const&) = delete;
    ErrorBindingBuilder(ErrorBindingBuilder const&)            = delete;
    ErrorBindingBuilder()                                      = delete;
#endif

public:
};

}; // namespace Scripting
