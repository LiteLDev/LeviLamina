#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PostGameEventRequestComponent {
public:
    // prevent constructor by default
    PostGameEventRequestComponent& operator=(PostGameEventRequestComponent const&);
    PostGameEventRequestComponent(PostGameEventRequestComponent const&);
    PostGameEventRequestComponent();

public:
    // NOLINTBEGIN
    MCAPI struct PostGameEventRequestComponent& operator=(struct PostGameEventRequestComponent&&);

    // NOLINTEND
};
