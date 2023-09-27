#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int T2>
class TypedClientNetId {
public:
    T1              mRawId;
    MCAPI static T1 sNextRawId;

    virtual ~TypedClientNetId();
    virtual void clientInit(TypedClientNetId<T0, T1, T2>);
    virtual void clientInit();
};
