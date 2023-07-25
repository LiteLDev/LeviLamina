#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct UUID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_UUID
public:
    UUID& operator=(UUID const&) = delete;
    UUID(UUID const&)            = delete;
    UUID()                       = delete;
#endif

public:
};

}; // namespace Scripting
