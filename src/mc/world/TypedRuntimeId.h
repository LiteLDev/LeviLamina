#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int T2>
class TypedRuntimeId {

public:
    T1        mRawId;
    static T1 sNextRawId;

    inline explicit operator T1() { return mRawId; }
};
