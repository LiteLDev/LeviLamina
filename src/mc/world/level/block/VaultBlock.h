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

class VaultBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    VaultBlock& operator=(VaultBlock const&);
    VaultBlock(VaultBlock const&);
    VaultBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VaultBlock() = default;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131
    virtual class Block const& getRenderBlock() const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI VaultBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI ::Flip getFaceFlip$(uchar face, class Block const& block) const;

    MCAPI struct Brightness getLightEmission$(class Block const& block) const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    MCAPI class Block const& getRenderBlock$() const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
