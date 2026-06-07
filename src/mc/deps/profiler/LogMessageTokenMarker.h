#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class LogMessageTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3ed3e1;
    ::ll::UntypedStorage<4, 4>  mUnk471bbf;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessageTokenMarker& operator=(LogMessageTokenMarker const&);
    LogMessageTokenMarker(LogMessageTokenMarker const&);
    LogMessageTokenMarker();
};

} // namespace Core::Profile
