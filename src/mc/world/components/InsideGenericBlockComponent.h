#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideGenericBlockComponent {

public:
    // prevent constructor by default
    InsideGenericBlockComponent& operator=(InsideGenericBlockComponent const&) = delete;
    InsideGenericBlockComponent(InsideGenericBlockComponent const&)            = delete;
    InsideGenericBlockComponent()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??4InsideGenericBlockComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct InsideGenericBlockComponent& operator=(struct InsideGenericBlockComponent&&);
    // NOLINTEND
};
