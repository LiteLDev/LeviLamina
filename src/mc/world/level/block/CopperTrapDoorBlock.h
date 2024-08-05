#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/TrapDoorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CopperTrapDoorBlock : public ::TrapDoorBlock {
public:
    // prevent constructor by default
    CopperTrapDoorBlock& operator=(CopperTrapDoorBlock const&);
    CopperTrapDoorBlock(CopperTrapDoorBlock const&);
    CopperTrapDoorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CopperTrapDoorBlock() = default;

    // vIndex: 18
    virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;

    // vIndex: 27
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 149
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    MCAPI CopperTrapDoorBlock(std::string const&, int, ::CopperType, class HashedString const&);

    MCAPI
    CopperTrapDoorBlock(std::string const&, int, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
