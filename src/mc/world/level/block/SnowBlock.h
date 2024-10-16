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

class SnowBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SnowBlock& operator=(SnowBlock const&);
    SnowBlock(SnowBlock const&);
    SnowBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnowBlock() = default;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    MCAPI SnowBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool waterSpreadCausesSpawn$() const;

    // NOLINTEND
};
