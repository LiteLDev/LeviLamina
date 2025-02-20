#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7f0d98;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataComponent& operator=(ExternalDataComponent const&);
    ExternalDataComponent(ExternalDataComponent const&);
    ExternalDataComponent();
};
