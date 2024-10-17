#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct InsideBlockWithPosComponent {
public:
    // prevent constructor by default
    InsideBlockWithPosComponent& operator=(InsideBlockWithPosComponent const&);
    InsideBlockWithPosComponent(InsideBlockWithPosComponent const&);
    InsideBlockWithPosComponent();
};
