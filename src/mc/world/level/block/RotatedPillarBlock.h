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

class RotatedPillarBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RotatedPillarBlock& operator=(RotatedPillarBlock const&);
    RotatedPillarBlock(RotatedPillarBlock const&);
    RotatedPillarBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RotatedPillarBlock();

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

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    MCAPI RotatedPillarBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const mRotatedX[];

    MCAPI static int const mRotatedZ[];

    // NOLINTEND
};
