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
    // symbol:
    // ?registerTickingSystem@IEntitySystemsCollection@@QEAAXV?$initializer_list@V?$typeid_t@USystemCategory@@@Bedrock@@@std@@V?$unique_ptr@VITickingSystem@@U?$default_delete@VITickingSystem@@@std@@@3@AEBUSystemInfo@@UEntitySystemTickingMode@@@Z
    MCAPI void registerTickingSystem(
        std::initializer_list<class Bedrock::typeid_t<struct SystemCategory>>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );

    // NOLINTEND
};
