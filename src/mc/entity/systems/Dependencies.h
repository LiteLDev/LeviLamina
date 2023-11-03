#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct Dependencies {
public:
    // prevent constructor by default
    Dependencies(Dependencies const&);
    Dependencies();

public:
    // NOLINTBEGIN
    // symbol: ??4Dependencies@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct Dependencies& operator=(struct Dependencies&&);

    // symbol: ??4Dependencies@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct Dependencies& operator=(struct Dependencies const&);

    // symbol: ??1Dependencies@@QEAA@XZ
    MCAPI ~Dependencies();

    // symbol: ?bindType@Dependencies@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
