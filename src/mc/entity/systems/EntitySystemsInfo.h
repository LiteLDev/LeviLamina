#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntitySystemsInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSYSTEMSINFO
public:
    EntitySystemsInfo& operator=(EntitySystemsInfo const&) = delete;
    EntitySystemsInfo(EntitySystemsInfo const&)            = delete;
    EntitySystemsInfo()                                    = delete;
#endif

public:
    /**
     * @symbol ?bindType\@EntitySystemsInfo\@\@SAXXZ
     */
    MCAPI static void bindType();
};
