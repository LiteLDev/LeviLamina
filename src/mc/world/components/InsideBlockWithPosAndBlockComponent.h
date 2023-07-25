#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct InsideBlockWithPosAndBlockComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKWITHPOSANDBLOCKCOMPONENT
public:
    InsideBlockWithPosAndBlockComponent& operator=(InsideBlockWithPosAndBlockComponent const&) = delete;
    InsideBlockWithPosAndBlockComponent(InsideBlockWithPosAndBlockComponent const&)            = delete;
    InsideBlockWithPosAndBlockComponent()                                                      = delete;
#endif

public:
};
