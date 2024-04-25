#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EasingInverse {
public:
    // prevent constructor by default
    EasingInverse& operator=(EasingInverse const&);
    EasingInverse(EasingInverse const&);
    EasingInverse();

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mEasingFuncs@EasingInverse@@0V?$vector@V?$function@$$A6AMMMM@Z@std@@V?$allocator@V?$function@$$A6AMMMM@Z@std@@@2@@std@@A
    MCAPI static std::vector<std::function<float(float, float, float)>> mEasingFuncs;

    // NOLINTEND
};
