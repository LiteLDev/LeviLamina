#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/IResolvedTint.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ClientBlockPipeline {

struct MultiResolvedTint : public ::ClientBlockPipeline::IResolvedTint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color> const> mTints;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar> const>        mTintIndexes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color const& get(int materialInstanceId, uchar facing) const /*override*/;

    virtual ~MultiResolvedTint() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color const& $get(int materialInstanceId, uchar facing) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
