#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryJson.h"

// auto generated forward declare list
// clang-format off
class Experiments;
// clang-format on

class ActorComponentFactory : public ::EntityComponentFactoryJson {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void _initialize(::Experiments const& experiments);
#endif

    MCAPI void _initializeComponentDefinitions(::Experiments const& experiments);

    MCAPI void _initializePropertyDefinitions(::Experiments const& experiments);

    MCAPI void _initializeTriggerDefinitions(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
