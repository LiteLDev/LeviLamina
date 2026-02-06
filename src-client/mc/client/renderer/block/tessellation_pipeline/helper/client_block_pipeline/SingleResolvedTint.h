#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/IResolvedTint.h"
#include "mc/deps/core/math/Color.h"

namespace ClientBlockPipeline {

struct SingleResolvedTint : public ::ClientBlockPipeline::IResolvedTint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color const> mTint;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color const& get(int, uchar) const /*override*/;

    virtual ~SingleResolvedTint() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::Color const& $get(int, uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
