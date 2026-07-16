#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct ScreenReaderOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           canBeInterrupted;
    ::ll::TypedStorage<8, 32, ::std::string> interruptibleId;
    ::ll::TypedStorage<1, 1, bool>           isRequired;
    ::ll::TypedStorage<1, 1, bool>           shouldPlayInBackground;
    ::ll::TypedStorage<1, 1, bool>           shouldPlayWhenPlatformTTSEnabled;
    // NOLINTEND
};

} // namespace OreUI
