#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct SectionPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk38dd9b;
    ::ll::UntypedStorage<4, 4> mUnk9f882a;
    ::ll::UntypedStorage<4, 4> mUnk2e38e0;
    // NOLINTEND

public:
    // prevent constructor by default
    SectionPos& operator=(SectionPos const&);
    SectionPos(SectionPos const&);
    SectionPos();
};

} // namespace Poi
