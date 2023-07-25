#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct IDType {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDTYPE
public:
    IDType& operator=(IDType const&) = delete;
    IDType(IDType const&)            = delete;
    IDType()                         = delete;
#endif

public:
};
