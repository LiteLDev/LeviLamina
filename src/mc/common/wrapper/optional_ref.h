#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class optional_ref {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTIONAL_REF
public:
    optional_ref& operator=(optional_ref const&) = delete;
    optional_ref(optional_ref const&)            = delete;
    optional_ref()                               = delete;
#endif

public:
};
