#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_50 {
public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemData_v1_20_50@@QEAA@XZ
    MCAPI ComponentItemData_v1_20_50();

    // symbol: ??0ComponentItemData_v1_20_50@@QEAA@$$QEAU0@@Z
    MCAPI ComponentItemData_v1_20_50(struct ComponentItemData_v1_20_50&&);

    // symbol: ??0ComponentItemData_v1_20_50@@QEAA@AEBU0@@Z
    MCAPI ComponentItemData_v1_20_50(struct ComponentItemData_v1_20_50 const&);

    // symbol: ??4ComponentItemData_v1_20_50@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ComponentItemData_v1_20_50& operator=(struct ComponentItemData_v1_20_50&&);

    // symbol: ??4ComponentItemData_v1_20_50@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ComponentItemData_v1_20_50& operator=(struct ComponentItemData_v1_20_50 const&);

    // symbol: ??1ComponentItemData_v1_20_50@@QEAA@XZ
    MCAPI ~ComponentItemData_v1_20_50();

    // symbol: ?bindType@ComponentItemData_v1_20_50@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?moveDeprecatedData@ComponentItemData_v1_20_50@@SAXAEAU1@AEAUComponentItemData_v1_20_40@@@Z
    MCAPI static void moveDeprecatedData(struct ComponentItemData_v1_20_50&, struct ComponentItemData_v1_20_40&);

    // symbol: ?FIRST_VERSION@ComponentItemData_v1_20_50@@2VSemVersion@@B
    MCAPI static class SemVersion const FIRST_VERSION;

    // symbol: ?LAST_VERSION@ComponentItemData_v1_20_50@@2VSemVersion@@B
    MCAPI static class SemVersion const LAST_VERSION;

    // NOLINTEND
};
