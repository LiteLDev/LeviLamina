#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_40 {
public:
    // prevent constructor by default
    ComponentItemData_v1_20_40& operator=(ComponentItemData_v1_20_40 const&);
    ComponentItemData_v1_20_40(ComponentItemData_v1_20_40 const&);

public:
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_20_40();

    MCAPI ~ComponentItemData_v1_20_40();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static void
    moveDeprecatedData(struct ComponentItemData_v1_20_30& oldData, struct ComponentItemData_v1_20_40& newData);

    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
