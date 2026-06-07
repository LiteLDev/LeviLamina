#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

namespace ClientBlockPipeline {

struct PackedPosition {
public:
    // member variables
    // NOLINTBEGIN
    uchar x : 5;
    uchar y : 5;
    uchar z : 5;
    // NOLINTEND

public:
    // prevent constructor by default
    PackedPosition& operator=(PackedPosition const&);
    PackedPosition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PackedPosition(::BlockPos const& p);

    MCAPI PackedPosition(::ClientBlockPipeline::PackedPosition const& p);

    MCAPI PackedPosition(uchar x, uchar y, uchar z);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& p);

    MCAPI void* $ctor(::ClientBlockPipeline::PackedPosition const& p);

    MCAPI void* $ctor(uchar x, uchar y, uchar z);
    // NOLINTEND
};

} // namespace ClientBlockPipeline
