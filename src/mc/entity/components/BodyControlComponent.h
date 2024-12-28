#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BodyControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6d8010;
    // NOLINTEND

public:
    // prevent constructor by default
    BodyControlComponent& operator=(BodyControlComponent const&);
    BodyControlComponent(BodyControlComponent const&);
    BodyControlComponent();
};
