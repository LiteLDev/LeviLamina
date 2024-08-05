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

class BookshelfBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BookshelfBlock& operator=(BookshelfBlock const&);
    BookshelfBlock(BookshelfBlock const&);
    BookshelfBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BookshelfBlock() = default;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    MCAPI BookshelfBlock(std::string const& nameId, int id);

    // NOLINTEND
};
