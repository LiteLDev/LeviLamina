#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/WoodType.h"

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
    virtual void _addHardCodedBlockComponents(class Experiments const& experiments);

    MCAPI PlanksBlock(std::string const& nameId, int id, ::WoodType woodType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, ::WoodType woodType);

    MCAPI void _addHardCodedBlockComponents$(class Experiments const& experiments);

    MCAPI std::string buildDescriptionId$(class Block const&) const;

    MCAPI static std::array<std::string, 9> const& WOOD_NAMES();

    // NOLINTEND
};
