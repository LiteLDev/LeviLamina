#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct IEntitySystemsCollection {
public:
    // prevent constructor by default
    IEntitySystemsCollection& operator=(IEntitySystemsCollection const&);
    IEntitySystemsCollection(IEntitySystemsCollection const&);
    IEntitySystemsCollection();

public:
    virtual ~IEntitySystemsCollection() = default;
    // NOLINTBEGIN
    MCAPI void registerTickingSystem(
        std::initializer_list<class Bedrock::typeid_t<struct SystemCategory>>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );

    // NOLINTEND
};
