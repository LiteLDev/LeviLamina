#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct ViewportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk7d4bf1;
    ::ll::UntypedStorage<4, 8> mUnkc9bd0c;
    ::ll::UntypedStorage<4, 4> mUnk390f75;
    ::ll::UntypedStorage<4, 4> mUnkae4109;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewportInfo& operator=(ViewportInfo const&);
    ViewportInfo(ViewportInfo const&);
    ViewportInfo();

};

}
