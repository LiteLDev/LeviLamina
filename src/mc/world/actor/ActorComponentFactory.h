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
    // vIndex: 0, symbol: __gen_??1ActorComponentFactory@@UEAA@XZ
    virtual ~ActorComponentFactory() = default;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initialize@ActorComponentFactory@@AEAAXAEBVExperiments@@@Z
    MCAPI void _initialize(class Experiments const& experiments);

    // NOLINTEND
};
