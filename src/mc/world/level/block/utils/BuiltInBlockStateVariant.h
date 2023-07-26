#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class BuiltInBlockStateVariant {

public:
    // prevent constructor by default
    BuiltInBlockStateVariant& operator=(BuiltInBlockStateVariant const&) = delete;
    BuiltInBlockStateVariant(BuiltInBlockStateVariant const&)            = delete;
    BuiltInBlockStateVariant()                                           = delete;
};
