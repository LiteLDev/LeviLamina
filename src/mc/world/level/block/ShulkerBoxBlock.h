#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/UndyedShulkerBoxBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ShulkerBoxBlock : public ::UndyedShulkerBoxBlock {
public:
    // prevent constructor by default
    ShulkerBoxBlock& operator=(ShulkerBoxBlock const&);
    ShulkerBoxBlock(ShulkerBoxBlock const&);
    ShulkerBoxBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShulkerBoxBlock() = default;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 121
    virtual int getColor(class Block const& block) const;

    MCAPI ShulkerBoxBlock(std::string const& nameId, int id);

    // NOLINTEND
};
