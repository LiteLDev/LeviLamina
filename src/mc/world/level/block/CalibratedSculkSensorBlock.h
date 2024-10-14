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
#include "mc/world/level/block/SculkSensorBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CalibratedSculkSensorBlock : public ::SculkSensorBlock {
public:
    // prevent constructor by default
    CalibratedSculkSensorBlock& operator=(CalibratedSculkSensorBlock const&);
    CalibratedSculkSensorBlock(CalibratedSculkSensorBlock const&);
    CalibratedSculkSensorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CalibratedSculkSensorBlock() = default;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    MCAPI CalibratedSculkSensorBlock(std::string const& nameId, int id);

    MCAPI static int getInputStrength(class BlockSource const& region, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::Flip getFaceFlip$(uchar face, class Block const& block) const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
