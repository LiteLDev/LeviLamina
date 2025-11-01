#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct IRuntimeMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::thread::id> mThreadId;
    // NOLINTEND

};

}
