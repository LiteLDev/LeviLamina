#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemComponentData_v1_20_30 {
public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemComponentData_v1_20_30@@QEAA@XZ
    MCAPI ComponentItemComponentData_v1_20_30();

    // symbol: ??0ComponentItemComponentData_v1_20_30@@QEAA@$$QEAU0@@Z
    MCAPI ComponentItemComponentData_v1_20_30(struct ComponentItemComponentData_v1_20_30&&);

    // symbol: ??0ComponentItemComponentData_v1_20_30@@QEAA@AEBU0@@Z
    MCAPI ComponentItemComponentData_v1_20_30(struct ComponentItemComponentData_v1_20_30 const&);

    // symbol: ??4ComponentItemComponentData_v1_20_30@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ComponentItemComponentData_v1_20_30& operator=(struct ComponentItemComponentData_v1_20_30&&);

    // symbol: ??4ComponentItemComponentData_v1_20_30@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ComponentItemComponentData_v1_20_30& operator=(struct ComponentItemComponentData_v1_20_30 const&);

    // symbol: ??1ComponentItemComponentData_v1_20_30@@QEAA@XZ
    MCAPI ~ComponentItemComponentData_v1_20_30();

    // symbol: ?bindType@ComponentItemComponentData_v1_20_30@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?upgrade@ComponentItemComponentData_v1_20_30@@SA?AU1@AEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UIItemComponentLegacyFactoryData@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UIItemComponentLegacyFactoryData@@@2@@std@@@2@@std@@@Z
    MCAPI static struct ComponentItemComponentData_v1_20_30
    upgrade(std::map<std::string, std::shared_ptr<struct IItemComponentLegacyFactoryData>>&);

    // symbol: ?FIRST_VERSION@ComponentItemComponentData_v1_20_30@@2VSemVersion@@B
    MCAPI static class SemVersion const FIRST_VERSION;

    // symbol: ?LAST_VERSION@ComponentItemComponentData_v1_20_30@@2VSemVersion@@B
    MCAPI static class SemVersion const LAST_VERSION;

    // NOLINTEND
};
