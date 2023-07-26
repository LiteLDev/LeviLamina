#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct SupportedBindingModule {

public:
    // prevent constructor by default
    SupportedBindingModule& operator=(SupportedBindingModule const&) = delete;
    SupportedBindingModule(SupportedBindingModule const&)            = delete;
    SupportedBindingModule()                                         = delete;
};

}; // namespace Scripting
