#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveRequestComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEREQUESTCOMPONENT
public:
    MoveRequestComponent& operator=(MoveRequestComponent const&) = delete;
    MoveRequestComponent(MoveRequestComponent const&)            = delete;
    MoveRequestComponent()                                       = delete;
#endif

public:
    /**
     * @symbol ??4MoveRequestComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct MoveRequestComponent& operator=(struct MoveRequestComponent&&);
};
