#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct AddRemove {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDREMOVE
public:
    AddRemove& operator=(AddRemove const&) = delete;
    AddRemove(AddRemove const&)            = delete;
    AddRemove()                            = delete;
#endif

public:
};
