#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalConstBlockSourceFactoryComponent {

public:
    // prevent constructor by default
    LocalConstBlockSourceFactoryComponent& operator=(LocalConstBlockSourceFactoryComponent const&) = delete;
    LocalConstBlockSourceFactoryComponent(LocalConstBlockSourceFactoryComponent const&)            = delete;
    LocalConstBlockSourceFactoryComponent()                                                        = delete;
};
