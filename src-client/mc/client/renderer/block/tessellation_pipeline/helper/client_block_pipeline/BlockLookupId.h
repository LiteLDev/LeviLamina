#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct BlockLookupId
: public ::type_safe::strong_typedef<::ClientBlockPipeline::BlockLookupId, ushort>,
  public ::type_safe::strong_typedef_op::equality_comparison<::ClientBlockPipeline::BlockLookupId> {};

} // namespace ClientBlockPipeline
