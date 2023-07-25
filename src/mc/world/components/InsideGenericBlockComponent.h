#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideGenericBlockComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEGENERICBLOCKCOMPONENT
public:
    InsideGenericBlockComponent& operator=(InsideGenericBlockComponent const&) = delete;
    InsideGenericBlockComponent(InsideGenericBlockComponent const&)            = delete;
    InsideGenericBlockComponent()                                              = delete;
#endif

public:
    /**
     * @symbol ??4InsideGenericBlockComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct InsideGenericBlockComponent& operator=(struct InsideGenericBlockComponent&&);
};
