#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class optional_ref {

public:
    // prevent constructor by default
    optional_ref& operator=(optional_ref const&) = delete;
    optional_ref(optional_ref const&)            = delete;
    optional_ref()                               = delete;
};
