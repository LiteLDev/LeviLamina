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

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CobblestoneBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CobblestoneBlock& operator=(CobblestoneBlock const&);
    CobblestoneBlock(CobblestoneBlock const&);
    CobblestoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CobblestoneBlock() = default;

    // vIndex: 140
    virtual class Block const* tryGetInfested(class Block const& block) const;

    MCAPI CobblestoneBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI class Block const* tryGetInfested$(class Block const& block) const;

    // NOLINTEND
};
