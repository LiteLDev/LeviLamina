#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/SlabBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StoneSlabBlock4 : public ::SlabBlock {
public:
    // prevent constructor by default
    StoneSlabBlock4& operator=(StoneSlabBlock4 const&);
    StoneSlabBlock4(StoneSlabBlock4 const&);
    StoneSlabBlock4();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoneSlabBlock4() = default;

    // vIndex: 50
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 160
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    MCAPI StoneSlabBlock4(std::string const& nameId, int id, bool fullSize, class HashedString const& baseSlab);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, bool fullSize, class HashedString const& baseSlab);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI class mce::Color getMapColor$(class BlockSource&, class BlockPos const&, class Block const& block) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI static std::array<std::string, 5> const& SLAB_NAMES();

    // NOLINTEND
};
