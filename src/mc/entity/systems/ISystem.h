#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ISystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISYSTEM
public:
    ISystem& operator=(ISystem const&) = delete;
    ISystem(ISystem const&)            = delete;
    ISystem()                          = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISYSTEM
    /**
     * @symbol ?registerEvents\@ISystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    MCVAPI void registerEvents(class entt::basic_dispatcher<class std::allocator<void>>&);
#endif
};
