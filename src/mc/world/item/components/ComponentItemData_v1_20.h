#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20 {
public:
    // prevent constructor by default
    ComponentItemData_v1_20& operator=(ComponentItemData_v1_20 const&);
    ComponentItemData_v1_20(ComponentItemData_v1_20 const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemData_v1_20@@QEAA@XZ
    MCAPI ComponentItemData_v1_20();

    // symbol: ??1ComponentItemData_v1_20@@QEAA@XZ
    MCAPI ~ComponentItemData_v1_20();

    // symbol: ?bindType@ComponentItemData_v1_20@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?FIRST_VERSION@ComponentItemData_v1_20@@2VSemVersion@@B
    MCAPI static class SemVersion const FIRST_VERSION;

    // symbol: ?LAST_VERSION@ComponentItemData_v1_20@@2VSemVersion@@B
    MCAPI static class SemVersion const LAST_VERSION;

    // NOLINTEND
};
