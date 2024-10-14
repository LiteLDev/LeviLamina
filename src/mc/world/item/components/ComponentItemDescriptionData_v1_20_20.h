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
    MCAPI ComponentItemDescriptionData_v1_20_20(struct ComponentItemDescriptionData_v1_20_20&&);

    MCAPI struct ComponentItemDescriptionData_v1_20_20& operator=(struct ComponentItemDescriptionData_v1_20_20&&);

    MCAPI struct ComponentItemDescriptionData_v1_20_20& operator=(struct ComponentItemDescriptionData_v1_20_20 const&);

    MCAPI ~ComponentItemDescriptionData_v1_20_20();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
