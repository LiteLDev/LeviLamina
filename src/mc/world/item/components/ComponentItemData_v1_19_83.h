#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_19_83 {
public:
    // prevent constructor by default
    ComponentItemData_v1_19_83& operator=(ComponentItemData_v1_19_83 const&);
    ComponentItemData_v1_19_83(ComponentItemData_v1_19_83 const&);
    ComponentItemData_v1_19_83();

public:
    // NOLINTBEGIN
    // symbol: ??1ComponentItemData_v1_19_83@@QEAA@XZ
    MCAPI ~ComponentItemData_v1_19_83();

    // symbol: ?bindType@ComponentItemData_v1_19_83@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?FIRST_VERSION@ComponentItemData_v1_19_83@@2VSemVersion@@B
    MCAPI static class SemVersion const FIRST_VERSION;

    // symbol: ?LAST_VERSION@ComponentItemData_v1_19_83@@2VSemVersion@@B
    MCAPI static class SemVersion const LAST_VERSION;

    // NOLINTEND
};
