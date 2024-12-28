#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class Result_deprecated {
public:
    // prevent constructor by default
    Result_deprecated& operator=(Result_deprecated const&);
    Result_deprecated(Result_deprecated const&);
    Result_deprecated();
};

} // namespace Scripting
