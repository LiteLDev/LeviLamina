#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadingStateComponent {
public:
    // prevent constructor by default
    LoadingStateComponent& operator=(LoadingStateComponent const&);
    LoadingStateComponent(LoadingStateComponent const&);
    LoadingStateComponent();
};
