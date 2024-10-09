#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct SupportedBindingModule {
public:
    // prevent constructor by default
    SupportedBindingModule& operator=(SupportedBindingModule const&);
    SupportedBindingModule(SupportedBindingModule const&);
    SupportedBindingModule();

public:
    // NOLINTBEGIN
    MCAPI ~SupportedBindingModule();

    // NOLINTEND
};

}; // namespace Scripting
