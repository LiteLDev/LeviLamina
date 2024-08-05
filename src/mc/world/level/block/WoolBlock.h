#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockColor.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
