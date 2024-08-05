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
    MCAPI ComponentItemMenuCategoryData_v1_20_20(struct ComponentItemMenuCategoryData_v1_20_20 const&);

    MCAPI struct ComponentItemMenuCategoryData_v1_20_20& operator=(struct ComponentItemMenuCategoryData_v1_20_20&&);

    MCAPI struct ComponentItemMenuCategoryData_v1_20_20&
    operator=(struct ComponentItemMenuCategoryData_v1_20_20 const&);

    MCAPI ~ComponentItemMenuCategoryData_v1_20_20();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static void
    upgrade(std::optional<::CreativeItemCategory>&, std::optional<struct ComponentItemMenuCategoryData_v1_20_20>&);

    // NOLINTEND
};
