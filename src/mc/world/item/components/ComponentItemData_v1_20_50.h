#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_50 {
public:
    // prevent constructor by default
    ComponentItemData_v1_20_50& operator=(ComponentItemData_v1_20_50 const&);
    ComponentItemData_v1_20_50(ComponentItemData_v1_20_50 const&);

public:
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_20_50();

    MCAPI ~ComponentItemData_v1_20_50();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static void moveDeprecatedData(struct ComponentItemData_v1_20_40&, struct ComponentItemData_v1_20_50&);

    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
