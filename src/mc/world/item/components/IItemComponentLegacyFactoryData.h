#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct IItemComponentLegacyFactoryData {
public:
    // prevent constructor by default
    IItemComponentLegacyFactoryData& operator=(IItemComponentLegacyFactoryData const&);
    IItemComponentLegacyFactoryData(IItemComponentLegacyFactoryData const&);
    IItemComponentLegacyFactoryData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IItemComponentLegacyFactoryData@@UEAA@XZ
    virtual ~IItemComponentLegacyFactoryData();

    // symbol: ?bindType@IItemComponentLegacyFactoryData@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
