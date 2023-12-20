#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerLegacyBlockInfo {
public:
    // prevent constructor by default
    DiggerLegacyBlockInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0DiggerLegacyBlockInfo@@QEAA@AEBU0@@Z
    MCAPI DiggerLegacyBlockInfo(struct DiggerLegacyBlockInfo const&);

    // symbol: ??4DiggerLegacyBlockInfo@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct DiggerLegacyBlockInfo& operator=(struct DiggerLegacyBlockInfo&&);

    // symbol: ??4DiggerLegacyBlockInfo@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct DiggerLegacyBlockInfo& operator=(struct DiggerLegacyBlockInfo const&);

    // symbol: ?bindType@DiggerLegacyBlockInfo@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
