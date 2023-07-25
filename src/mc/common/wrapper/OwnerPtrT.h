#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class OwnerPtrT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERPTRT
public:
    OwnerPtrT& operator=(OwnerPtrT const&) = delete;
    OwnerPtrT(OwnerPtrT const&)            = delete;
    OwnerPtrT()                            = delete;
#endif

public:
};
