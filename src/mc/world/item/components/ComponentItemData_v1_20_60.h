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
    // symbol: ??0ComponentItemData_v1_20_60@@QEAA@XZ
    MCAPI ComponentItemData_v1_20_60();

    // symbol: ??1ComponentItemData_v1_20_60@@QEAA@XZ
    MCAPI ~ComponentItemData_v1_20_60();

    // symbol: ?bindType@ComponentItemData_v1_20_60@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?moveDeprecatedData@ComponentItemData_v1_20_60@@SAXAEAUComponentItemData_v1_20_50@@AEAU1@@Z
    MCAPI static void moveDeprecatedData(struct ComponentItemData_v1_20_50&, struct ComponentItemData_v1_20_60&);

    // symbol: ?SUPPORTED_VERSIONS@ComponentItemData_v1_20_60@@2VVersionRange@Puv@@B
    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
