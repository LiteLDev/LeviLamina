#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Version {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_VERSION
public:
    Version& operator=(Version const&) = delete;
    Version(Version const&)            = delete;
    Version()                          = delete;
#endif

public:
};

}; // namespace Scripting
