#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemMenuCategoryData_v1_20_20 {
public:
    // prevent constructor by default
    ComponentItemMenuCategoryData_v1_20_20();

public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemMenuCategoryData_v1_20_20@@QEAA@AEBU0@@Z
    MCAPI ComponentItemMenuCategoryData_v1_20_20(struct ComponentItemMenuCategoryData_v1_20_20 const&);

    // symbol: ??4ComponentItemMenuCategoryData_v1_20_20@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ComponentItemMenuCategoryData_v1_20_20& operator=(struct ComponentItemMenuCategoryData_v1_20_20&&);

    // symbol: ??4ComponentItemMenuCategoryData_v1_20_20@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ComponentItemMenuCategoryData_v1_20_20&
    operator=(struct ComponentItemMenuCategoryData_v1_20_20 const&);

    // symbol: ??1ComponentItemMenuCategoryData_v1_20_20@@QEAA@XZ
    MCAPI ~ComponentItemMenuCategoryData_v1_20_20();

    // symbol: ?bindType@ComponentItemMenuCategoryData_v1_20_20@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?upgrade@ComponentItemMenuCategoryData_v1_20_20@@SA?AV?$optional@UComponentItemMenuCategoryData_v1_20_20@@@std@@$$QEAV?$optional@W4CreativeItemCategory@@@3@@Z
    MCAPI static std::optional<struct ComponentItemMenuCategoryData_v1_20_20>
    upgrade(std::optional<::CreativeItemCategory>&&);

    // symbol: ?FIRST_VERSION@ComponentItemMenuCategoryData_v1_20_20@@2VSemVersion@@B
    MCAPI static class SemVersion const FIRST_VERSION;

    // symbol: ?LAST_VERSION@ComponentItemMenuCategoryData_v1_20_20@@2VSemVersion@@B
    MCAPI static class SemVersion const LAST_VERSION;

    // NOLINTEND
};
