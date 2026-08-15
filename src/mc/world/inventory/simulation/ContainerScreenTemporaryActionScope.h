#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionScope.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenSimulation;
// clang-format on

class ContainerScreenTemporaryActionScope : public ::ContainerScreenActionScope {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerScreenTemporaryActionScope();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenTemporaryActionScope() /*override*/ = default;
    // NOLINTEND
};
