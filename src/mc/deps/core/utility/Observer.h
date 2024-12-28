#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0, typename T1>
class Observer {
public:
    // prevent constructor by default
    Observer& operator=(Observer const&);
    Observer(Observer const&);
    Observer();
};

} // namespace Core
