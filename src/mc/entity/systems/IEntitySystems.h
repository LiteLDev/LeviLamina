#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

class IEntitySystems {
public:
    // prevent constructor by default
    IEntitySystems& operator=(IEntitySystems const&);
    IEntitySystems(IEntitySystems const&);
    IEntitySystems();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IEntitySystems@@UEAA@XZ
    virtual ~IEntitySystems() = default;

    // symbol:
    // ?registerTickingSystem@IEntitySystems@@QEAAXV?$initializer_list@V?$typeid_t@USystemCategory@@@Bedrock@@@std@@V?$unique_ptr@VITickingSystem@@U?$default_delete@VITickingSystem@@@std@@@3@AEBUSystemInfo@@UEntitySystemTickingMode@@@Z
    MCAPI void registerTickingSystem(
        std::initializer_list<class Bedrock::typeid_t<struct SystemCategory>>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );

    // NOLINTEND
};
