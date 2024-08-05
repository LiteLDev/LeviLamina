#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PreferredPathComponent {
public:
    // prevent constructor by default
    PreferredPathComponent& operator=(PreferredPathComponent const&);
    PreferredPathComponent(PreferredPathComponent const&);
    PreferredPathComponent();

public:
    // NOLINTBEGIN
    MCAPI void initFromDefinition(class Actor&);

    MCAPI static struct PreferredPathDescription const& getPreferredPath(class Actor const& actor);

    // NOLINTEND
};
