#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/RotatedPillarBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
