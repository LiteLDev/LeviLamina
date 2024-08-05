#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/NewLogType.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/LogBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class NewLogBlock : public ::LogBlock {
public:
    // prevent constructor by default
    NewLogBlock& operator=(NewLogBlock const&);
    NewLogBlock(NewLogBlock const&);
    NewLogBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NewLogBlock() = default;

    MCAPI NewLogBlock(
        std::string const& nameId,
        int                id,
        class WeakPtr<class BlockLegacy const>,
        std::optional<struct LogBlockMapColors> mapColors,
        ::NewLogType
    );

    // NOLINTEND
};
