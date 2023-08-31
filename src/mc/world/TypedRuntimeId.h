#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int32_t T2>
class TypedRuntimeId {

public:
    T1        mRawId;
    static T1 sNextRawId;

    constexpr explicit operator T1() { return mRawId; }
};
