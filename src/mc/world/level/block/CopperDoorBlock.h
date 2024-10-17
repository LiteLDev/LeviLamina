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
#include "mc/world/level/block/CopperType.h"
#include "mc/world/level/block/DoorBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CopperDoorBlock : public ::DoorBlock {
public:
    // prevent constructor by default
    CopperDoorBlock& operator=(CopperDoorBlock const&);
    CopperDoorBlock(CopperDoorBlock const&);
    CopperDoorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CopperDoorBlock() = default;

    // vIndex: 18
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 27
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI CopperDoorBlock(
        std::string const&        nameId,
        int                       id,
        ::DoorBlock::DoorType     type,
        ::CopperType              copperType,
        class HashedString const& previousVariant
    );

    MCAPI CopperDoorBlock(
        std::string const&        nameId,
        int                       id,
        ::DoorBlock::DoorType     type,
        ::CopperType              copperType,
        class HashedString const& previousVariant,
        class HashedString const& nextAgeVariant,
        class HashedString const& waxedVariant
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::string const&        nameId,
        int                       id,
        ::DoorBlock::DoorType     type,
        ::CopperType              copperType,
        class HashedString const& previousVariant,
        class HashedString const& nextAgeVariant,
        class HashedString const& waxedVariant
    );

    MCAPI void* ctor$(
        std::string const&        nameId,
        int                       id,
        ::DoorBlock::DoorType     type,
        ::CopperType              copperType,
        class HashedString const& previousVariant
    );

    MCAPI void onLightningHit$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class CopperBehavior const* tryGetCopperBehavior$() const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
