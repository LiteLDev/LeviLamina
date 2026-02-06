#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/IResolvedTint.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ClientBlockPipeline {

struct WhiteResolvedTint : public ::ClientBlockPipeline::IResolvedTint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color const& get(int, uchar) const /*override*/;

    virtual ~WhiteResolvedTint() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color const& $get(int, uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
