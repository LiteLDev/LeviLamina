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
    // vIndex: 0
    virtual ~ActorComponentFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initialize(::Experiments const& experiments);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
