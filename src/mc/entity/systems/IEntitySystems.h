#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class IEntitySystems {
public:
    // prevent constructor by default
    IEntitySystems& operator=(IEntitySystems const&);
    IEntitySystems(IEntitySystems const&);
    IEntitySystems();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntitySystems() = default;

    MCAPI void registerTickingSystem(
        std::initializer_list<class Bedrock::typeid_t<struct SystemCategory>>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );

    // NOLINTEND
};
