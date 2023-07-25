#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadingStateComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOADINGSTATECOMPONENT
public:
    LoadingStateComponent& operator=(LoadingStateComponent const&) = delete;
    LoadingStateComponent(LoadingStateComponent const&)            = delete;
    LoadingStateComponent()                                        = delete;
#endif

public:
};
