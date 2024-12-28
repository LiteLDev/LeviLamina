#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl::internal_any_invocable {

struct ConversionConstruct {
public:
    // prevent constructor by default
    ConversionConstruct& operator=(ConversionConstruct const&);
    ConversionConstruct(ConversionConstruct const&);
    ConversionConstruct();
};

} // namespace absl::internal_any_invocable
