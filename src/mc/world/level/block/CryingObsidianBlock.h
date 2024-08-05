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

class CryingObsidianBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CryingObsidianBlock& operator=(CryingObsidianBlock const&);
    CryingObsidianBlock(CryingObsidianBlock const&);
    CryingObsidianBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CryingObsidianBlock() = default;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    MCAPI CryingObsidianBlock(std::string const& nameId, int id);

    // NOLINTEND
};
