#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadingStateComponent {

public:
    // prevent constructor by default
    LoadingStateComponent& operator=(LoadingStateComponent const&) = delete;
    LoadingStateComponent(LoadingStateComponent const&)            = delete;
    LoadingStateComponent()                                        = delete;
};
