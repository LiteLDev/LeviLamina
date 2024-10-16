#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/LogBlock.h"
#include "mc/world/level/block/OldLogType.h"

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
        std::string const&                      nameId,
        int                                     id,
        class WeakPtr<class BlockLegacy const>  strippedBlockLegacy,
        std::optional<struct LogBlockMapColors> mapColors,
        ::OldLogType                            oldLogType
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::string const&                      nameId,
        int                                     id,
        class WeakPtr<class BlockLegacy const>  strippedBlockLegacy,
        std::optional<struct LogBlockMapColors> mapColors,
        ::OldLogType                            oldLogType
    );

    // NOLINTEND
};
