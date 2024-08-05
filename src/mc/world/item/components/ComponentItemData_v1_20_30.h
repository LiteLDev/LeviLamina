#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_30 {
public:
    // prevent constructor by default
    ComponentItemData_v1_20_30& operator=(ComponentItemData_v1_20_30 const&);
    ComponentItemData_v1_20_30(ComponentItemData_v1_20_30 const&);
    ComponentItemData_v1_20_30();

public:
    // NOLINTBEGIN
    MCAPI ~ComponentItemData_v1_20_30();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static void moveDeprecatedData(struct ComponentItemData_v1_20_20&, struct ComponentItemData_v1_20_30&);

    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
