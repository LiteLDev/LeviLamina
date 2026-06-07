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
    // prevent constructor by default
    ActorComponentFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorComponentFactory(::Experiments const& experiments);

    MCAPI void _initializeComponentDefinitions(::Experiments const&);

    MCAPI void _initializePropertyDefinitions(::Experiments const&);

    MCAPI void _initializeTriggerDefinitions(::Experiments const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Experiments const& experiments);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
