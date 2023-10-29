#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemDescriptionData_v1_20_20 {
public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_20_20(ComponentItemDescriptionData_v1_20_20 const&);
    ComponentItemDescriptionData_v1_20_20();

public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemDescriptionData_v1_20_20@@QEAA@$$QEAU0@@Z
    MCAPI ComponentItemDescriptionData_v1_20_20(struct ComponentItemDescriptionData_v1_20_20&&);

    // symbol: ??4ComponentItemDescriptionData_v1_20_20@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ComponentItemDescriptionData_v1_20_20& operator=(struct ComponentItemDescriptionData_v1_20_20&&);

    // symbol: ??4ComponentItemDescriptionData_v1_20_20@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ComponentItemDescriptionData_v1_20_20& operator=(struct ComponentItemDescriptionData_v1_20_20 const&);

    // symbol: ??1ComponentItemDescriptionData_v1_20_20@@QEAA@XZ
    MCAPI ~ComponentItemDescriptionData_v1_20_20();

    // symbol: ?bindType@ComponentItemDescriptionData_v1_20_20@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?FIRST_VERSION@ComponentItemDescriptionData_v1_20_20@@2VSemVersion@@B
    MCAPI static class SemVersion const FIRST_VERSION;

    // symbol: ?LAST_VERSION@ComponentItemDescriptionData_v1_20_20@@2VSemVersion@@B
    MCAPI static class SemVersion const LAST_VERSION;

    // NOLINTEND
};
