#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct ShadowRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk555642;
    ::ll::UntypedStorage<4, 4> mUnk8b637a;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowRange& operator=(ShadowRange const&);
    ShadowRange(ShadowRange const&);
    ShadowRange();
};

} // namespace mce::framebuilder
