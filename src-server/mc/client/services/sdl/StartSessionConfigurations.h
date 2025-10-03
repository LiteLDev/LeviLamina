#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct StartSessionConfigurations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk558f3f;
    // NOLINTEND

public:
    // prevent constructor by default
    StartSessionConfigurations& operator=(StartSessionConfigurations const&);
    StartSessionConfigurations(StartSessionConfigurations const&);
    StartSessionConfigurations();
};

} // namespace SDL
