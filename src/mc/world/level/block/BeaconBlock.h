#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BeaconBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    BeaconBlock& operator=(BeaconBlock const&);
    BeaconBlock(BeaconBlock const&);
    BeaconBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconBlock() = default;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI BeaconBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canContainLiquid$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
