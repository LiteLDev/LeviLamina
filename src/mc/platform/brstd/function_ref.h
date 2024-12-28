#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

template <typename T0, typename T1>
class function_ref {
public:
    // prevent constructor by default
    function_ref& operator=(function_ref const&);
    function_ref(function_ref const&);
    function_ref();
};

} // namespace brstd
