#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_80 {
public:
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_20_80();

    MCAPI ComponentItemData_v1_20_80(struct ComponentItemData_v1_20_80&&);

    MCAPI ComponentItemData_v1_20_80(struct ComponentItemData_v1_20_80 const&);

    MCAPI struct ComponentItemData_v1_20_80& operator=(struct ComponentItemData_v1_20_80&&);

    MCAPI struct ComponentItemData_v1_20_80& operator=(struct ComponentItemData_v1_20_80 const&);

    MCAPI ~ComponentItemData_v1_20_80();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static void
    moveDeprecatedData(struct ComponentItemData_v1_20_60& oldData, struct ComponentItemData_v1_20_80& newData);

    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
