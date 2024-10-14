#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SculkCatalystBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkCatalystBlock& operator=(SculkCatalystBlock const&);
    SculkCatalystBlock(SculkCatalystBlock const&);
    SculkCatalystBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkCatalystBlock() = default;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI SculkCatalystBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI static void
    bloom(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Random&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
