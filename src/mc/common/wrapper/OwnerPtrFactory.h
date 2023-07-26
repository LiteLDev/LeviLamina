#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename T2>
class OwnerPtrFactory {

public:
    // prevent constructor by default
    OwnerPtrFactory& operator=(OwnerPtrFactory const&) = delete;
    OwnerPtrFactory(OwnerPtrFactory const&)            = delete;
    OwnerPtrFactory()                                  = delete;
};
