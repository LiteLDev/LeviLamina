#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockMaterialInstanceProxy {
public:
    // prevent constructor by default
    BlockMaterialInstanceProxy& operator=(BlockMaterialInstanceProxy const&);
    BlockMaterialInstanceProxy();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockMaterialInstanceProxy@@QEAA@AEBU0@@Z
    MCAPI BlockMaterialInstanceProxy(struct BlockMaterialInstanceProxy const&);

    // symbol: ??1BlockMaterialInstanceProxy@@QEAA@XZ
    MCAPI ~BlockMaterialInstanceProxy();

    // symbol: ?bindType@BlockMaterialInstanceProxy@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
