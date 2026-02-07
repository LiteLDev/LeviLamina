#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ITintResolver.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct BiomeTintCache;
namespace mce { class Color; }
// clang-format on

namespace ClientBlockPipeline {

class PositionAgnosticTintResolver : public ::ClientBlockPipeline::ITintResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color
    _get(::Block const& block, ::BlockPos const&, ::TintMethod tintMethod, ::BiomeTintCache*) /*override*/;

    virtual ~PositionAgnosticTintResolver() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $_get(::Block const& block, ::BlockPos const&, ::TintMethod tintMethod, ::BiomeTintCache*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
