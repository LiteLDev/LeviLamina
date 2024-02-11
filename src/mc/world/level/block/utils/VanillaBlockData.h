#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaBlockData {
public:
    // prevent constructor by default
    VanillaBlockData& operator=(VanillaBlockData const&);
    VanillaBlockData(VanillaBlockData const&);
    VanillaBlockData();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildNetworkTag@VanillaBlockData@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // symbol: ?bindType@VanillaBlockData@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
