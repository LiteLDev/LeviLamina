#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_60 {
public:
    // prevent constructor by default
    ComponentItemData_v1_20_60& operator=(ComponentItemData_v1_20_60 const&);
    ComponentItemData_v1_20_60(ComponentItemData_v1_20_60 const&);

public:
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_20_60();

    MCAPI ~ComponentItemData_v1_20_60();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static void
    moveDeprecatedData(struct ComponentItemData_v1_20_50& oldData, struct ComponentItemData_v1_20_60& newData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class Puv::VersionRange const& SUPPORTED_VERSIONS();

    // NOLINTEND
};
