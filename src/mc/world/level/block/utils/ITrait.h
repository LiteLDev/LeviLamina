#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockTrait {

class ITrait {
public:
    // prevent constructor by default
    ITrait& operator=(ITrait const&);
    ITrait(ITrait const&);
    ITrait();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ITrait@@@UEAA@XZ
    virtual ~ITrait();

    // vIndex: 1, symbol: ?applyToBlockLegacy@PlacementDirection@BlockTrait@@UEBAXAEAVBlockLegacy@@@Z
    virtual void applyToBlockLegacy(class BlockLegacy&) const = 0;

    // vIndex: 2, symbol:
    // ?buildNetworkTag@PlacementDirection@BlockTrait@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const = 0;

    // vIndex: 3, symbol: ?initializeFromNetwork@PlacementDirection@BlockTrait@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&) = 0;

    // symbol: ?bindType@ITrait@BlockTrait@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace BlockTrait
