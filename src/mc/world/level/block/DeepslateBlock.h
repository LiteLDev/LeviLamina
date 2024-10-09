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
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DeepslateBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    DeepslateBlock& operator=(DeepslateBlock const&);
    DeepslateBlock(DeepslateBlock const&);
    DeepslateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeepslateBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 140
    virtual class Block const* tryGetInfested(class Block const& block) const;

    MCAPI DeepslateBlock(std::string const& nameId, int id);

    // NOLINTEND
};
