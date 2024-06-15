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
    // symbol: ??0ComponentItemData_v1_20_80@@QEAA@XZ
    MCAPI ComponentItemData_v1_20_80();

    // symbol: ??0ComponentItemData_v1_20_80@@QEAA@$$QEAU0@@Z
    MCAPI ComponentItemData_v1_20_80(struct ComponentItemData_v1_20_80&&);

    // symbol: ??0ComponentItemData_v1_20_80@@QEAA@AEBU0@@Z
    MCAPI ComponentItemData_v1_20_80(struct ComponentItemData_v1_20_80 const&);

    // symbol: ??4ComponentItemData_v1_20_80@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ComponentItemData_v1_20_80& operator=(struct ComponentItemData_v1_20_80&&);

    // symbol: ??4ComponentItemData_v1_20_80@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ComponentItemData_v1_20_80& operator=(struct ComponentItemData_v1_20_80 const&);

    // symbol: ??1ComponentItemData_v1_20_80@@QEAA@XZ
    MCAPI ~ComponentItemData_v1_20_80();

    // symbol: ?bindType@ComponentItemData_v1_20_80@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?moveDeprecatedData@ComponentItemData_v1_20_80@@SAXAEAUComponentItemData_v1_20_60@@AEAU1@@Z
    MCAPI static void moveDeprecatedData(struct ComponentItemData_v1_20_60&, struct ComponentItemData_v1_20_80&);

    // symbol: ?SUPPORTED_VERSIONS@ComponentItemData_v1_20_80@@2VVersionRange@Puv@@B
    MCAPI static class Puv::VersionRange const SUPPORTED_VERSIONS;

    // NOLINTEND
};
