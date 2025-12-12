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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorComponentFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
