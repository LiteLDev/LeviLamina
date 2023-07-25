#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct SupportedBindingModule {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_SUPPORTEDBINDINGMODULE
public:
    SupportedBindingModule& operator=(SupportedBindingModule const&) = delete;
    SupportedBindingModule(SupportedBindingModule const&)            = delete;
    SupportedBindingModule()                                         = delete;
#endif

public:
};

}; // namespace Scripting
