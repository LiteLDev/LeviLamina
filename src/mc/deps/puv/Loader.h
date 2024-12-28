#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

template <typename T0>
class Loader {
public:
    // prevent constructor by default
    Loader& operator=(Loader const&);
    Loader(Loader const&);
    Loader();
};

} // namespace Puv
