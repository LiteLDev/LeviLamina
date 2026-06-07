#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class LogMessageToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf44afc;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessageToken& operator=(LogMessageToken const&);
    LogMessageToken(LogMessageToken const&);
    LogMessageToken();
};

} // namespace Core::Profile
