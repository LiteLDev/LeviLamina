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

class ChemicalHeatBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ChemicalHeatBlock& operator=(ChemicalHeatBlock const&);
    ChemicalHeatBlock(ChemicalHeatBlock const&);
    ChemicalHeatBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChemicalHeatBlock() = default;

    // vIndex: 61
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 157
    virtual int getExtraRenderLayers() const;

    MCAPI ChemicalHeatBlock(std::string const& nameId, int id);

    // NOLINTEND
};
