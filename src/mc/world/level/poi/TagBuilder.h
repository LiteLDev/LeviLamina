#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

class TagBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkbb1078;
    ::ll::UntypedStorage<8, 24> mUnk691f69;
    ::ll::UntypedStorage<8, 24> mUnk25a169;
    // NOLINTEND

public:
    // prevent constructor by default
    TagBuilder& operator=(TagBuilder const&);
    TagBuilder(TagBuilder const&);
    TagBuilder();
};

} // namespace Poi
