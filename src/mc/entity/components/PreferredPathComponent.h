#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PreferredPathComponent {
public:
    // prevent constructor by default
    PreferredPathComponent& operator=(PreferredPathComponent const&);
    PreferredPathComponent(PreferredPathComponent const&);
    PreferredPathComponent();
};
