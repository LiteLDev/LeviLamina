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

class BedrockBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BedrockBlock& operator=(BedrockBlock const&);
    BedrockBlock(BedrockBlock const&);
    BedrockBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BedrockBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const& experiments);

    MCAPI BedrockBlock(std::string const& nameId, int id);

    // NOLINTEND
};
