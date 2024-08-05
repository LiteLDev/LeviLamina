#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GlazedTerracottaBlock : public ::FaceDirectionalBlock {
public:
    // prevent constructor by default
    GlazedTerracottaBlock& operator=(GlazedTerracottaBlock const&);
    GlazedTerracottaBlock(GlazedTerracottaBlock const&);
    GlazedTerracottaBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlazedTerracottaBlock() = default;

    // vIndex: 50
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    MCAPI GlazedTerracottaBlock(std::string const& nameId, int id);

    // NOLINTEND
};
