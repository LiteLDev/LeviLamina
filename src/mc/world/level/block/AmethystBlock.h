#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AmethystBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    AmethystBlock& operator=(AmethystBlock const&);
    AmethystBlock(AmethystBlock const&);
    AmethystBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AmethystBlock();

    // vIndex: 17
    virtual void onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const&) const;

    // vIndex: 49
    virtual bool isSilentWhenJumpingOff() const;

    MCAPI AmethystBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
