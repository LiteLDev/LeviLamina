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

class ColoredTerracottaBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ColoredTerracottaBlock& operator=(ColoredTerracottaBlock const&);
    ColoredTerracottaBlock(ColoredTerracottaBlock const&);
    ColoredTerracottaBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ColoredTerracottaBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    MCAPI ColoredTerracottaBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    // NOLINTEND
};
