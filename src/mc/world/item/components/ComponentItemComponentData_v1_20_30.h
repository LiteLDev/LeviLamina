#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemComponentData_v1_20_30 {
public:
    // NOLINTBEGIN
    MCAPI ComponentItemComponentData_v1_20_30();

    MCAPI ComponentItemComponentData_v1_20_30(struct ComponentItemComponentData_v1_20_30&&);

    MCAPI ComponentItemComponentData_v1_20_30(struct ComponentItemComponentData_v1_20_30 const&);

    MCAPI struct ComponentItemComponentData_v1_20_30& operator=(struct ComponentItemComponentData_v1_20_30&&);

    MCAPI struct ComponentItemComponentData_v1_20_30& operator=(struct ComponentItemComponentData_v1_20_30 const&);

    MCAPI ~ComponentItemComponentData_v1_20_30();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(struct ComponentItemComponentData_v1_20_30 const&);

    MCAPI void* ctor$(struct ComponentItemComponentData_v1_20_30&&);

    MCAPI void dtor$();

    MCAPI static class SemVersion const& FIRST_VERSION();

    MCAPI static class SemVersion const& LAST_VERSION();

    // NOLINTEND
};
