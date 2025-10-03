#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int T2>
class TypedRuntimeId {
public:
    T1              mRawId;
    MCAPI static T1 sNextRawId;

    [[nodiscard]] constexpr explicit operator T1() { return mRawId; }
};
