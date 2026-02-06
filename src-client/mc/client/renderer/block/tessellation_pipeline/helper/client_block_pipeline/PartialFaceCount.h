#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct PartialFaceCount
: public ::type_safe::strong_typedef<::ClientBlockPipeline::PartialFaceCount, uint64>,
  public ::type_safe::strong_typedef_op::equality_comparison<::ClientBlockPipeline::PartialFaceCount> {};

} // namespace ClientBlockPipeline
