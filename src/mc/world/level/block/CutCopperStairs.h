#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/StairBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CutCopperStairs : public ::StairBlock {
public:
    // prevent constructor by default
    CutCopperStairs& operator=(CutCopperStairs const&);
    CutCopperStairs(CutCopperStairs const&);
    CutCopperStairs();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CutCopperStairs() = default;

    // vIndex: 18
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 27
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI
    CutCopperStairs(std::string const& nameId, int id, class BlockLegacy const& base, ::CopperType, class HashedString const&);

    MCAPI
    CutCopperStairs(std::string const& nameId, int id, class BlockLegacy const& base, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
