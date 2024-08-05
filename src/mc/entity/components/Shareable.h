#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Shareable {
public:
    // prevent constructor by default
    Shareable& operator=(Shareable const&);
    Shareable(Shareable const&);
    Shareable();

public:
    // NOLINTBEGIN
    MCAPI void setCraftInto(std::string const& name);

    MCAPI void setItem(std::string const& name);

    // NOLINTEND
};
