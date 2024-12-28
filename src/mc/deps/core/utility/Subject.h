#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0, typename T1>
class Subject {
public:
    // prevent constructor by default
    Subject& operator=(Subject const&);
    Subject(Subject const&);
    Subject();
};

} // namespace Core
