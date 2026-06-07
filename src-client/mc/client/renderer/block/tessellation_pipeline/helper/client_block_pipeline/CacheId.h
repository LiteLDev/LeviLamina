#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

namespace ClientBlockPipeline {

struct CacheId : public ::type_safe::strong_typedef<::ClientBlockPipeline::CacheId, ushort> {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ClientBlockPipeline::CacheId index(::BlockPos const& relativePos);
    // NOLINTEND
};

} // namespace ClientBlockPipeline
