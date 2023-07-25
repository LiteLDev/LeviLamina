#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename T2>
class OwnerPtrFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERPTRFACTORY
public:
    OwnerPtrFactory& operator=(OwnerPtrFactory const&) = delete;
    OwnerPtrFactory(OwnerPtrFactory const&)            = delete;
    OwnerPtrFactory()                                  = delete;
#endif

public:
};
