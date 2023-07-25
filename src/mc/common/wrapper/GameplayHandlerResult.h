#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct GameplayHandlerResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEPLAYHANDLERRESULT
public:
    GameplayHandlerResult& operator=(GameplayHandlerResult const&) = delete;
    GameplayHandlerResult(GameplayHandlerResult const&)            = delete;
    GameplayHandlerResult()                                        = delete;
#endif

public:
};
