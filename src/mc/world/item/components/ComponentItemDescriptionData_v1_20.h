#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemDescriptionData_v1_20 {
public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_20(ComponentItemDescriptionData_v1_20 const&);
    ComponentItemDescriptionData_v1_20();

public:
    // NOLINTBEGIN
    MCAPI struct ComponentItemDescriptionData_v1_20& operator=(struct ComponentItemDescriptionData_v1_20 const&);

    MCAPI ~ComponentItemDescriptionData_v1_20();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
