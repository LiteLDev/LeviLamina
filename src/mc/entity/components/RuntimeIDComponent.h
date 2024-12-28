#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RuntimeIDComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk488d54;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeIDComponent& operator=(RuntimeIDComponent const&);
    RuntimeIDComponent(RuntimeIDComponent const&);
    RuntimeIDComponent();
};
