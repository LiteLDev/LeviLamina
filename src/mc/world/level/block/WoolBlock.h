#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WoolBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    WoolBlock& operator=(WoolBlock const&);
    WoolBlock(WoolBlock const&);
    WoolBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WoolBlock() = default;

    // vIndex: 28
    virtual bool canDamperVibrations() const;

    // vIndex: 29
    virtual bool canOccludeVibrations() const;

    MCAPI WoolBlock(std::string const& nameId, int id, ::BlockColor color);

    // NOLINTEND
};
