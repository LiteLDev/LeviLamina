#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 131
    virtual class Block const& getRenderBlock() const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar, class Block const&) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    MCAPI VaultBlock(std::string const&, int);

    // NOLINTEND
};
