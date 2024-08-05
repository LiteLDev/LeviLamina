#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalDataComponent {
public:
    // prevent constructor by default
    ExternalDataComponent& operator=(ExternalDataComponent const&);
    ExternalDataComponent(ExternalDataComponent const&);
    ExternalDataComponent();

public:
    // NOLINTBEGIN
    MCAPI ~ExternalDataComponent();

    // NOLINTEND
};
