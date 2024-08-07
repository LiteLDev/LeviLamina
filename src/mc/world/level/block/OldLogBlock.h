#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/OldLogType.h"
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

class OldLogBlock : public ::LogBlock {
public:
    // prevent constructor by default
    OldLogBlock& operator=(OldLogBlock const&);
    OldLogBlock(OldLogBlock const&);
    OldLogBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OldLogBlock() = default;

    MCAPI OldLogBlock(
        std::string const& nameId,
        int                id,
        class WeakPtr<class BlockLegacy const>,
        std::optional<struct LogBlockMapColors> mapColors,
        ::OldLogType
    );

    // NOLINTEND
};
