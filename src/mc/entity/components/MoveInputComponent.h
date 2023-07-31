#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputComponent {

public:
    // prevent constructor by default
    MoveInputComponent& operator=(MoveInputComponent const&) = delete;
    MoveInputComponent(MoveInputComponent const&)            = delete;
    MoveInputComponent()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??4MoveInputComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct MoveInputComponent& operator=(struct MoveInputComponent&&);
    // NOLINTEND
};
