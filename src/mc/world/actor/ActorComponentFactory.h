#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryJson.h"

class ActorComponentFactory : public ::EntityComponentFactoryJson {
public:
    // prevent constructor by default
    ActorComponentFactory& operator=(ActorComponentFactory const&);
    ActorComponentFactory(ActorComponentFactory const&);
    ActorComponentFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorComponentFactory() = default;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initialize(class Experiments const& experiments);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
