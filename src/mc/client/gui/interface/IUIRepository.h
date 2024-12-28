#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIRepository {
public:
    // prevent constructor by default
    IUIRepository& operator=(IUIRepository const&);
    IUIRepository(IUIRepository const&);
    IUIRepository();
};
