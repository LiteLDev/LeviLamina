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
    // symbol: ??1ComponentItemData_v1_20_30@@QEAA@XZ
    MCAPI ~ComponentItemData_v1_20_30();

    // symbol: ?bindType@ComponentItemData_v1_20_30@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?moveDeprecatedData@ComponentItemData_v1_20_30@@SAXAEAUComponentItemData_v1_20_20@@AEAU1@@Z
    MCAPI static void moveDeprecatedData(struct ComponentItemData_v1_20_20&, struct ComponentItemData_v1_20_30&);

    // symbol: ?SUPPORTED_VERSIONS@ComponentItemData_v1_20_30@@2VVersionRange@Puv@@B
    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
