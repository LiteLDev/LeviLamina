#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentInfo {
public:
    // prevent constructor by default
    ComponentInfo(ComponentInfo const&);
    ComponentInfo();

public:
    // NOLINTBEGIN
    // symbol: ??4ComponentInfo@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ComponentInfo& operator=(struct ComponentInfo&&);

    // symbol: ??4ComponentInfo@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ComponentInfo& operator=(struct ComponentInfo const&);

    // symbol: ??1ComponentInfo@@QEAA@XZ
    MCAPI ~ComponentInfo();

    // symbol: ?bindType@ComponentInfo@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
