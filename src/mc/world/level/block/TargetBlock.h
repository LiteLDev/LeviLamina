#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
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

class TargetBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TargetBlock& operator=(TargetBlock const&);
    TargetBlock(TargetBlock const&);
    TargetBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TargetBlock() = default;

    // vIndex: 17
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI TargetBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _processHitByProjectileAtPos(
        class Vec3 const&     hitPos,
        class BlockSource&    region,
        class BlockPos const& blockPos,
        class Actor const&    projectile
    ) const;

    // NOLINTEND
};
