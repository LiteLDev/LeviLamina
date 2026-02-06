#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ITintResolver.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class Block;
struct BiomeTintCache;
namespace mce { class Color; }
// clang-format on

namespace ClientBlockPipeline {

class PositionDependentTintResolver : public ::ClientBlockPipeline::ITintResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 264, ::BlockSource>   mSource;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mMinPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color _get(
        ::Block const&    block,
        ::BlockPos const& blockPos,
        ::TintMethod      tintMethod,
        ::BiomeTintCache* biomeTintCache
    ) /*override*/;

    virtual ~PositionDependentTintResolver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color
    $_get(::Block const& block, ::BlockPos const& blockPos, ::TintMethod tintMethod, ::BiomeTintCache* biomeTintCache);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
