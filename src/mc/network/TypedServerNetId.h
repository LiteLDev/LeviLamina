#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int T2>
class TypedServerNetId {
public:
    T1              mRawId;
    MCAPI static T1 sNextRawId;
    TypedServerNetId(T1 const& rawId) : mRawId(rawId) {}
    [[nodiscard]] constexpr explicit operator T1() { return mRawId; }
};
