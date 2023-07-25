#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int T2>
class TypedRuntimeId {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TYPEDRUNTIMEID
public:
    TypedRuntimeId& operator=(TypedRuntimeId const&) = delete;
    TypedRuntimeId(TypedRuntimeId const&)            = delete;
    TypedRuntimeId()                                 = delete;
#endif

public:
};
