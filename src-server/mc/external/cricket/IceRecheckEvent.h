#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceRecheckEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk490974;
    ::ll::UntypedStorage<4, 4> mUnk565d60;
    // NOLINTEND

public:
    // prevent constructor by default
    IceRecheckEvent& operator=(IceRecheckEvent const&);
    IceRecheckEvent(IceRecheckEvent const&);
    IceRecheckEvent();

};

}
