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

class ObsidianBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ObsidianBlock& operator=(ObsidianBlock const&);
    ObsidianBlock(ObsidianBlock const&);
    ObsidianBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ObsidianBlock() = default;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const& experiments);

    MCAPI ObsidianBlock(std::string const& nameId, int id, bool isGlowing);

    MCAPI void poofParticles(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _addHardCodedBlockComponents$(class Experiments const& experiments);

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
