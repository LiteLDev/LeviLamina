#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0, int T1>
class BasicStackString {
public:
    // prevent constructor by default
    BasicStackString& operator=(BasicStackString const&);
    BasicStackString(BasicStackString const&);
    BasicStackString();
};

} // namespace Core
