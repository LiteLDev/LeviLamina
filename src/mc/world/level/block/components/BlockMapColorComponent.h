#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMapColorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMAPCOLORCOMPONENT
public:
    BlockMapColorComponent& operator=(BlockMapColorComponent const&) = delete;
    BlockMapColorComponent(BlockMapColorComponent const&)            = delete;
    BlockMapColorComponent()                                         = delete;
#endif

public:
    /**
     * @symbol ?usesNewComponentStorage\@BlockMapColorComponent\@\@SA_NXZ
     */
    MCAPI static bool usesNewComponentStorage();
};
