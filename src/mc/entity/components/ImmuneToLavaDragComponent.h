#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImmuneToLavaDragComponent {
public:
    // prevent constructor by default
    ImmuneToLavaDragComponent& operator=(ImmuneToLavaDragComponent const&);
    ImmuneToLavaDragComponent(ImmuneToLavaDragComponent const&);
    ImmuneToLavaDragComponent();
};
