#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::CodeBuilder {

struct Event {
public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);
    Event();

public:
    // NOLINTBEGIN
    MCAPI explicit Event(std::string const& name);

    MCAPI ~Event();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& name);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Util::CodeBuilder
