#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUTCOMPONENT
public:
    MoveInputComponent& operator=(MoveInputComponent const&) = delete;
    MoveInputComponent(MoveInputComponent const&)            = delete;
    MoveInputComponent()                                     = delete;
#endif

public:
    /**
     * @symbol ??4MoveInputComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct MoveInputComponent& operator=(struct MoveInputComponent&&);
};
