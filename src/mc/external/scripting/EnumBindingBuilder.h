#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0, typename T1>
class EnumBindingBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_ENUMBINDINGBUILDER
public:
    EnumBindingBuilder& operator=(EnumBindingBuilder const&) = delete;
    EnumBindingBuilder(EnumBindingBuilder const&)            = delete;
    EnumBindingBuilder()                                     = delete;
#endif

public:
};

}; // namespace Scripting
