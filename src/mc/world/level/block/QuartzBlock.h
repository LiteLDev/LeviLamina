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
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class QuartzBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    QuartzBlock& operator=(QuartzBlock const&);
    QuartzBlock(QuartzBlock const&);
    QuartzBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~QuartzBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    MCAPI QuartzBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI class Block const& getPlacementBlock$(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    // NOLINTEND
};
