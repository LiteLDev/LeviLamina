#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/WoodType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class PlanksBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PlanksBlock& operator=(PlanksBlock const&);
    PlanksBlock(PlanksBlock const&);
    PlanksBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlanksBlock() = default;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    MCAPI PlanksBlock(std::string const&, int, ::WoodType);

    MCAPI static std::array<std::string, 9> const WOOD_NAMES;

    // NOLINTEND
};
