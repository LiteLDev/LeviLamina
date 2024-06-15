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
    // ?upgrade@ComponentItemMenuCategoryData_v1_20_20@@SAXAEAV?$optional@W4CreativeItemCategory@@@std@@AEAV?$optional@UComponentItemMenuCategoryData_v1_20_20@@@3@@Z
    MCAPI static void
    upgrade(std::optional<::CreativeItemCategory>&, std::optional<struct ComponentItemMenuCategoryData_v1_20_20>&);

    // NOLINTEND
};
