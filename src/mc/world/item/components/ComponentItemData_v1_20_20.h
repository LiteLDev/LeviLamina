#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_20 {
public:
    // prevent constructor by default
    ComponentItemData_v1_20_20& operator=(ComponentItemData_v1_20_20 const&);
    ComponentItemData_v1_20_20(ComponentItemData_v1_20_20 const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemData_v1_20_20@@QEAA@XZ
    MCAPI ComponentItemData_v1_20_20();

    // symbol: ??1ComponentItemData_v1_20_20@@QEAA@XZ
    MCAPI ~ComponentItemData_v1_20_20();

    // symbol: ?bindType@ComponentItemData_v1_20_20@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?SUPPORTED_VERSIONS@ComponentItemData_v1_20_20@@2VVersionRange@Puv@@B
    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
