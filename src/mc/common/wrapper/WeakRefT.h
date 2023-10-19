#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"

template <typename T0>
class WeakRefT : public T0::WeakStorage {
public:
    using StackRef = typename T0::StackRef;
    using Base     = typename T0::WeakStorage;
    using Base::Base;
};
