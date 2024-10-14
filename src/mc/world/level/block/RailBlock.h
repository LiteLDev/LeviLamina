#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BaseRailBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    RailBlock& operator=(RailBlock const&);
    RailBlock(RailBlock const&);
    RailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RailBlock() = default;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    MCAPI RailBlock(std::string const& nameId, int id);

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

    // NOLINTEND
};
