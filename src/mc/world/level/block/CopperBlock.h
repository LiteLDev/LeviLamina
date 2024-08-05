#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CopperBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CopperBlock& operator=(CopperBlock const&);
    CopperBlock(CopperBlock const&);
    CopperBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CopperBlock();

    // vIndex: 18
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 27
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI CopperBlock(std::string const&, int, ::CopperType, class HashedString const&, bool);

    MCAPI CopperBlock(
        std::string const&,
        int,
        ::CopperType,
        class HashedString const&,
        class HashedString const&,
        class HashedString const&,
        bool
    );

    // NOLINTEND
};
